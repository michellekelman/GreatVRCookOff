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
    public GameObject playButton;
    public GameObject instructions;
    public GameObject instructionsButton;
    public GameObject eventSystem;
    public GameObject playerMenu;
    private bool first = false;
    string X;
    string Y;
    
    // Start is called before the first frame update
    void Start()
    {
        character.GetComponent<CharacterMovement>().speed = 0;
        reticle.SetActive(false);
        playerMenu.SetActive(false);
        X = "js1";
        Y = "js0";
    }

    // Update is called once per frame
    void Update()
    {
        if (Input.GetButton(X) && EventSystem.current.currentSelectedGameObject == playButton)
        {
            PlayGame();
        }
        if (Input.GetButtonDown(X) && EventSystem.current.currentSelectedGameObject == instructionsButton) 
        {
            ShowInstructions();
        }
        if (Input.GetButton(Y) && instructions.activeSelf)
        {
            PlayGame();
        }
        if (menu.activeSelf && !first && eventSystem.GetComponent<StandaloneInputModule>().enabled == false)
        {
            eventSystem.GetComponent<XRCardboardInputModule>().enabled = false;
            eventSystem.GetComponent<StandaloneInputModule>().enabled = true;
            EventSystem.current.SetSelectedGameObject(null);
            EventSystem.current.SetSelectedGameObject(playButton);
            first = true;
        }
    }

    public void PlayGame()
    {
        eventSystem.GetComponent<XRCardboardInputModule>().enabled = true;
        eventSystem.GetComponent<StandaloneInputModule>().enabled = false;
        menu.SetActive(false);
        instructions.SetActive(false);
        EventSystem.current.SetSelectedGameObject(null);
        character.GetComponent<CharacterMovement>().speed = 5;
        reticle.SetActive(true);
        playerMenu.SetActive(true);
    }

    public void ShowInstructions()
    {
        instructions.SetActive(true);
        menu.SetActive(false);
    }

}
