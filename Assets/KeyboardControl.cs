using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro; 
using UnityEngine.UI;
using UnityEngine.EventSystems;
using System;

public class KeyboardControl : MonoBehaviour
{
    public GameObject menu;
    public GameObject player;
    public GameObject display;
    public GameObject keyboard;
    public GameObject startKey;
    string input;
    string X;
    private string[] bMap;
    private GameObject curKey;

    // Start is called before the first frame update
    void Start()
    {
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
            else if (Input.GetButtonDown(X) && curKey.name.Contains("Space") && input.Length<12)
            {
                Space();
            }
            else if (Input.GetButtonDown(X) && curKey.name.Contains("SUBMIT"))
            {
                Submit();
            }
            else if (Input.GetButtonDown(X) && input.Length<12)
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

    void Space()
    {
        input = input + " ";
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
        // close menu
        Debug.Log(input);
        Reset();
        menu.SetActive(false);
    }
}
