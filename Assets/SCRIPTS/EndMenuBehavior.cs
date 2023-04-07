using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro; 
using UnityEngine.UI;
using UnityEngine.EventSystems;
using UnityEngine.SceneManagement;

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
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        if (character.GetComponent<RecipeStepsBehavior>().step8Complete)
        {
            ActivateMenu();
        }
        // if (endMenu.activeSelf && Input.GetButtonDown("js11") && EventSystem.current.currentSelectedGameObject == exitButton)
        // {
        //     SceneManager.LoadScene(SceneManager.GetActiveScene().name); //reset scene
        // }
    }

    void ActivateMenu()
    {
        playerMenu.SetActive(false);
        // reticle.SetActive(false);
        endMenu.SetActive(true);
        character.GetComponent<CharacterMovement>().speed = 0;
        eventSystem.GetComponent<XRCardboardInputModule>().enabled = false;
        eventSystem.GetComponent<StandaloneInputModule>().enabled = true;
        EventSystem.current.SetSelectedGameObject(null);
        EventSystem.current.SetSelectedGameObject(exitButton);
        timeDisplay.GetComponent<TMP_Text>().text = timer.GetComponent<TMP_Text>().text;
    }
}
