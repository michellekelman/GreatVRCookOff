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
    public GameObject plate;
    string X;
    private string[] bMap;
    bool menuOpen;

    void Start()
    {
        bMap = character.GetComponent<ButtonMapping>().getMap();
        X = bMap[2];
        menuOpen = false;
    }

    // Update is called once per frame
    void Update()
    {
        if (character.GetComponent<RecipeStepsBehavior>().step8Complete && !menuOpen)
        {
            ActivateMenu();
        }
        if (endMenu.activeSelf && Input.GetButtonDown(X) && EventSystem.current.currentSelectedGameObject == exitButton)
        {
            // SceneManager.LoadScene(SceneManager.GetActiveScene().name); //reset scene
            Debug.Log("Quitting Application");
            Application.Quit();
        }
    }

    void ActivateMenu()
    {
        playerMenu.SetActive(false);
        reticle.SetActive(false);
        endMenu.SetActive(true);
        character.GetComponent<CharacterMovement>().speed = 0;
        eventSystem.GetComponent<XRCardboardInputModule>().enabled = false;
        eventSystem.GetComponent<StandaloneInputModule>().enabled = true;
        EventSystem.current.SetSelectedGameObject(null);
        EventSystem.current.SetSelectedGameObject(exitButton);
        timeDisplay.GetComponent<TMP_Text>().text = timer.GetComponent<TMP_Text>().text;
        plate.GetComponent<Outline>().enabled = false;
        plate.GetComponent<Highlight>().enabled = false;
        menuOpen = true;
    }
}
