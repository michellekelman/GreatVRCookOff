using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.EventSystems;
using System;

public class SettingsMenuBehavior : MonoBehaviour
{
    // Start is called before the first frame update
    public GameObject menu;
    public GameObject character;
    public GameObject reticle;
    public GameObject recipe;
    public GameObject instructions;
    public GameObject recipeButton;
    public GameObject instructionsButton;
    public GameObject exitButton;
    public GameObject eventSystem;
    public GameObject playerMenu;
    public GameObject tempMenu;
    public GameObject menuController;
    string X;
    string Y;
    string B;
    string menuInputButton;
    private string[] bMap;

    void Start()
    {
        reticle = character.transform.Find("XRCardboardRig").Find("HeightOffset").Find("Main Camera").Find("VRGroup").Find("Reticle").gameObject;
        recipeButton = menu.transform.Find("SettingsMenu").Find("RecipeButton").gameObject;
        instructionsButton = menu.transform.Find("SettingsMenu").Find("InstructionsButton").gameObject;
        exitButton = menu.transform.Find("SettingsMenu").Find("ExitButton").gameObject;
        eventSystem = character.transform.Find("XRCardboardRig").Find("EventSystem").gameObject;
        menu.SetActive(false);
        bMap = character.GetComponent<ButtonMapping>().getMap();
        X = bMap[2];
        Y = bMap[3];
        B = bMap[1];
        menuInputButton = bMap[4];
        

    }

    // Update is called once per frame
    void Update()
    {
        if (Input.GetButtonDown(menuInputButton) && !menu.activeSelf)
        {
            ActivateMenu();
        }
        if (Input.GetButtonDown(X) && EventSystem.current.currentSelectedGameObject == recipeButton)
        {
            ShowRecipe();
        }
        if (Input.GetButtonDown(X) && EventSystem.current.currentSelectedGameObject == instructionsButton) 
        {
            ShowInstructions();
        }
        if (Input.GetButtonDown(X) && EventSystem.current.currentSelectedGameObject == exitButton) 
        {
            ResumeGame();
        }
        if (Input.GetButtonDown(Y) && (recipe.activeSelf || instructions.activeSelf) && (menuController.GetComponent<TimerControl>().offsetSet==true))
        {
            ResumeGame();
        }
        if (menu.activeSelf && Input.GetButtonDown(B)) {
            EventSystem.current.SetSelectedGameObject(recipeButton);
        }
    }

    public void ActivateMenu()
    {
        playerMenu.SetActive(false);
        tempMenu.SetActive(false);
        eventSystem.SetActive(false);
        eventSystem.GetComponent<XRCardboardInputModule>().enabled = false;
        eventSystem.GetComponent<StandaloneInputModule>().enabled = true;
        eventSystem.SetActive(true);
        character.GetComponent<CharacterMovement>().speed = 0;
        reticle.SetActive(false);
        menu.SetActive(true);
        recipe.SetActive(false);
        instructions.SetActive(false);
        EventSystem.current.SetSelectedGameObject(null);
        EventSystem.current.SetSelectedGameObject(recipeButton);
    }

    public void ShowRecipe()
    {
        menu.SetActive(false);
        recipe.SetActive(true);
    }

    public void ShowInstructions()
    {
        menu.SetActive(false);
        instructions.SetActive(true);
    }

    public void ResumeGame()
    {
        eventSystem.SetActive(false);
        eventSystem.GetComponent<XRCardboardInputModule>().enabled = true;
        eventSystem.GetComponent<StandaloneInputModule>().enabled = false;
        eventSystem.SetActive(true);
        menu.SetActive(false);
        recipe.SetActive(false);
        instructions.SetActive(false);
        EventSystem.current.SetSelectedGameObject(null);
        character.GetComponent<CharacterMovement>().speed = 5;
        reticle.SetActive(true);
        playerMenu.SetActive(true);
    }
}
