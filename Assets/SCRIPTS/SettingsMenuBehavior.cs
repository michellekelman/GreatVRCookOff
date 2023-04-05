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
    void Start()
    {
        menu.SetActive(false);
    }

    // Update is called once per frame
    void Update()
    {
        if (Input.GetButtonDown("js7") && !menu.activeSelf)
        {
            ActivateMenu();
        }
        if (Input.GetButtonDown("js11") && EventSystem.current.currentSelectedGameObject == recipeButton)
        {
            ShowRecipe();
        }
        if (Input.GetButtonDown("js11") && EventSystem.current.currentSelectedGameObject == instructionsButton) 
        {
            ShowInstructions();
        }
        if (Input.GetButtonDown("js11") && EventSystem.current.currentSelectedGameObject == exitButton) 
        {
            ResumeGame();
        }
        if (Input.GetButtonDown("js7") && (recipe.activeSelf || instructions.activeSelf))
        {
            ResumeGame();
        }
    }

    public void ActivateMenu()
    {
            eventSystem.GetComponent<XRCardboardInputModule>().enabled = false;
            eventSystem.GetComponent<StandaloneInputModule>().enabled = true;
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
        eventSystem.GetComponent<XRCardboardInputModule>().enabled = true;
        eventSystem.GetComponent<StandaloneInputModule>().enabled = false;
        menu.SetActive(false);
        recipe.SetActive(false);
        instructions.SetActive(false);
        EventSystem.current.SetSelectedGameObject(null);
        character.GetComponent<CharacterMovement>().speed = 5;
        reticle.SetActive(true);
    }
}
