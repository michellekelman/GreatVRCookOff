using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro; 
using UnityEngine.UI;
using UnityEngine.EventSystems;
using System;
using UnityEngine.SceneManagement;

public static class CreateOrJoinInfo
{
    public static string createOrJoin { get; set;}
}

public class RoomControl : MonoBehaviour
{
    public GameObject menu;
    public GameObject player;
    public GameObject display;
    public GameObject keyboard;
    public GameObject startKey;
    public GameObject error;
    string input;
    string X;
    private string[] bMap;
    private GameObject curKey;   
    public GameObject serverController;

    // Start is called before the first frame update
    void Start()
    {
        display = menu.transform.Find("RoomSelect").Find("Input").Find("InputText").gameObject;
        keyboard = menu.transform.Find("RoomSelect").Find("Keypad").gameObject;
        startKey = keyboard.transform.Find("0").gameObject;
        error = menu.transform.Find("RoomSelect").Find("Error").gameObject;
        bMap = player.GetComponent<ButtonMapping>().getMap();
        X = bMap[2];
        Reset();
        curKey = null;
    }

    // Update is called once per frame
    void Update()
    {
        if (menu.activeSelf)
        {
            curKey = EventSystem.current.currentSelectedGameObject;
            if (Input.GetButtonDown(X) && curKey.name.Contains("Backspace"))
            {
                if (input.Length>0)
                {
                    Backspace();
                }
            }
            else if (Input.GetButtonDown(X) && curKey.name.Contains("SUBMIT"))
            {
                Submit();
            }
            else if (Input.GetButtonDown(X) && curKey.name.Contains("Back"))
            {
                Back();
            }
            else if (Input.GetButtonDown(X) && input.Length<6)
            {
                Key(curKey.GetComponentInChildren<TMP_Text>().text);
            }
        }
    }

    void Reset()
    {
        input = "";
        EventSystem.current.SetSelectedGameObject(startKey);
        Display();
    }
    
    void Backspace() 
    {
        input = input.Substring(0, input.Length-1);
        Display();
    }

    void Key(string character)
    {
        input = input + character;
        Display();
    }

    void Display()
    {
        display.GetComponent<TMP_Text>().text = input;
    }

    void Submit()
    {
        // if (input.Length<6) // or already taken
        // {
        //     error.SetActive(true);
        // }
        // else
        // {
        //     // close menu
        //     Debug.Log(input);
        //     Reset();
        //     menu.SetActive(false);
        // }
        if (CreateOrJoinInfo.createOrJoin == "join")
        {
            serverController.GetComponent<JoinMultiplayerGame>().JoinRoom();
        }
        else if (CreateOrJoinInfo.createOrJoin == "create")
        {
            serverController.GetComponent<JoinMultiplayerGame>().CreateRoom();
        }
    }

    void Back()
    {
        SceneManager.LoadScene("StartScene");
    }
}
