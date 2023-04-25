using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.EventSystems;

public class StartMenuBehavior : MonoBehaviour
{

    public GameObject menu;
    public GameObject character;
    public GameObject reticle;
    public GameObject singlePlayerButton;
    public GameObject createRoomButton;
    public GameObject joinRoomButton;
    public GameObject instructions;
    public GameObject instructionsButton;
    public GameObject eventSystem;
    public GameObject playerMenu;
    public GameObject menuController;
    public GameObject serverController;
    private bool first = false;
    string X;
    string Y;
    string B;
    private string[] bMap;
    public bool offset;
    
    // Start is called before the first frame update
    void Start()
    {
        // character.GetComponent<CharacterMovement>().speed = 0;
        // reticle.SetActive(false);
        // playerMenu.SetActive(false);
        // instructions.SetActive(false);
        reticle = character.transform.Find("XRCardboardRig").Find("HeightOffset").Find("Main Camera").Find("VRGroup").Find("Reticle").gameObject;
        singlePlayerButton = menu.transform.Find("StartMenu").Find("SinglePlayerButton").gameObject;
        createRoomButton = menu.transform.Find("StartMenu").Find("CreateRoomButton").gameObject;
        joinRoomButton = menu.transform.Find("StartMenu").Find("JoinRoomButton").gameObject;
        instructions = character.transform.Find("InstructionsView").gameObject;
        instructionsButton = menu.transform.Find("StartMenu").Find("InstructionsButton").gameObject;
        eventSystem = character.transform.Find("XRCardboardRig").Find("EventSystem").gameObject;
        bMap = character.GetComponent<ButtonMapping>().getMap();
        X = bMap[2];
        Y = bMap[3];
        B = bMap[1];
        offset = false;
    }

    // Update is called once per frame
    void Update()
    {
        if (Input.GetButton(X) && EventSystem.current.currentSelectedGameObject == singlePlayerButton)
        {
            //GoToCreateOrJoinRoom();
        }
        else if (Input.GetButton(X) && EventSystem.current.currentSelectedGameObject == createRoomButton)
        {
            GoToCreateRoomScene();
        }
        else if (Input.GetButton(X) && EventSystem.current.currentSelectedGameObject == joinRoomButton)
        {
            GoToJoinRoomScene();
        }
        else if (Input.GetButtonDown(X) && EventSystem.current.currentSelectedGameObject == instructionsButton) 
        {
            ShowInstructions();
        }
        else if (Input.GetButton(Y) && instructions.activeSelf)
        {
            // character.GetComponent<PlayerMenu>().timeOffset = (int)Time.timeSinceLevelLoad;
            ShowStartMenu();
        }
        else if (EventSystem.current.currentSelectedGameObject == null) {
            EventSystem.current.SetSelectedGameObject(singlePlayerButton);
        }
        if (menu.activeSelf && !first && eventSystem.GetComponent<StandaloneInputModule>().enabled == false)
        {
            eventSystem.GetComponent<XRCardboardInputModule>().enabled = false;
            eventSystem.GetComponent<StandaloneInputModule>().enabled = true;
            EventSystem.current.SetSelectedGameObject(null);
            EventSystem.current.SetSelectedGameObject(singlePlayerButton);
            first = true;
        }
    }

    public void PlayGame()
    {
        if (!offset) {
            menuController.GetComponent<TimerControl>().timeOffset = (int)Time.timeSinceLevelLoad;
            offset = true;
            menuController.GetComponent<TimerControl>().offsetSet = true;
        }
        eventSystem.GetComponent<XRCardboardInputModule>().enabled = true;
        eventSystem.GetComponent<StandaloneInputModule>().enabled = false;
        menu.SetActive(false);
        instructions.SetActive(false);
        EventSystem.current.SetSelectedGameObject(null);
        character.GetComponent<CharacterMovement>().speed = 5;
        reticle.SetActive(true);
        // playerMenu.SetActive(true);
    }

    public void GoToCreateRoomScene()
    {
        serverController.GetComponent<GoToCreateOrJoinScene>().joinLobby("create");
    }

    public void GoToJoinRoomScene()
    {
        serverController.GetComponent<GoToCreateOrJoinScene>().joinLobby("join");
    }

    public void ShowInstructions()
    {
        instructions.SetActive(true);
        menu.SetActive(false);
    }

    public void ShowStartMenu()
    {
        instructions.SetActive(false);
        menu.SetActive(true);
    }

}
