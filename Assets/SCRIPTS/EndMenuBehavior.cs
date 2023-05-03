using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro; 
using UnityEngine.UI;
using UnityEngine.EventSystems;
using Photon.Pun;

public class EndMenuBehavior : MonoBehaviour
{
    // Start is called before the first frame update
    public GameObject endMenu;
    public GameObject exitButton;
    public GameObject timeDisplay;
    public GameObject placeDisplay;
    public GameObject menuController;
    public GameObject playerMenu;
    public GameObject timer;
    public GameObject eventSystem;
    public GameObject character;
    public GameObject reticle;
    public GameObject plate;
    public GameObject gameController;
    string X;
    private string[] bMap;
    bool menuOpen;


    void Start()
    {
        timer = GameObject.Find("GlobalTimer");
        exitButton = endMenu.transform.Find("EndMenuHelper").Find("ExitButton").gameObject;
        timeDisplay = endMenu.transform.Find("EndMenuHelper").Find("Time").gameObject;
        placeDisplay = endMenu.transform.Find("EndMenuHelper").Find("Place").gameObject;
        eventSystem = character.transform.Find("XRCardboardRig").Find("EventSystem").gameObject;
        reticle = character.transform.Find("XRCardboardRig").Find("HeightOffset").Find("Main Camera").Find("VRGroup").Find("Reticle").gameObject;
        bMap = character.GetComponent<ButtonMapping>().getMap();
        gameController = GameObject.Find("GameController");
        X = bMap[2];
        menuOpen = false;
        SetPlate();
    }

    void SetPlate()
    {
        if (this.transform.parent.parent.name == "Player1")
        {
            plate = GameObject.Find("Kitchen1Plate");
        }
        else if (this.transform.parent.parent.name == "Player2")
        {
            plate = GameObject.Find("Kitchen2Plate");
        }
        else if (this.transform.parent.parent.name == "Player3")
        {
            plate = GameObject.Find("Kitchen3Plate");
        }
        else if (this.transform.parent.parent.name == "Player4")
        {
            plate = GameObject.Find("Kitchen4Plate");
        }
    }

    // Update is called once per frame
    void Update()
    {
        if (character.GetComponent<RecipeStepsBehavior>().step8Complete && !menuOpen)
        {
            gameController.GetComponent<GlobalVariables>().addFinishedPlayer();
            ActivateMenu();
        }
        if (endMenu.activeSelf && Input.GetButtonDown(X) && EventSystem.current.currentSelectedGameObject == exitButton)
        {
            QuitGame();
        }
    }

    void ActivateMenu()
    {
        timeDisplay.GetComponent<TMP_Text>().text = timer.GetComponent<TMP_Text>().text;
        placeDisplay.GetComponent<TMP_Text>().text = GetPositionString(gameController.GetComponent<GlobalVariables>().playerFinishedCount);
        playerMenu.SetActive(false);
        reticle.SetActive(false);
        endMenu.SetActive(true);
        character.GetComponent<CharacterMovement>().speed = 0;
        eventSystem.GetComponent<XRCardboardInputModule>().enabled = false;
        eventSystem.GetComponent<StandaloneInputModule>().enabled = true;
        EventSystem.current.SetSelectedGameObject(null);
        EventSystem.current.SetSelectedGameObject(exitButton);
        plate.GetComponent<Outline>().enabled = false;
        plate.GetComponent<Highlight>().enabled = false;
        menuOpen = true;
    }

    string GetPositionString(int place)
    {
        if (place == 1)
            return "1st Place";
        else if (place == 2)
            return "2nd Place";
        else if (place == 3)
            return "3rd Place";
        else if (place == 4)
            return "4th Place";
        return "error";
    }

    void QuitGame()
    {
        PhotonNetwork.LeaveRoom();
        PhotonNetwork.AutomaticallySyncScene = false;
        PhotonNetwork.LoadLevel(0);
    }
}
