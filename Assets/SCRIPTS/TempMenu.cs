using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TempMenu : MonoBehaviour
{
    public GameObject pointerDial;
    public GameObject player;
    public GameObject tempMenu;
    bool inputProcessed;
    int pointerAngle; 
    bool tempOn;
    string X;

    // Start is called before the first frame update
    void Start()
    {
        X = "js1";
        inputProcessed = false;
        pointerAngle = 45;
        tempOn = false;
        
    }

    // Update is called once per frame
    void Update()
    {
        if(Input.GetButtonDown(X)) {
            Debug.Log("X is pressed!");
        }
        //pressing X to interact with stove
        if(Input.GetButtonDown(X) && 
            player.GetComponent<ActiveGameObject>().getActiveObject() != null &&
            player.GetComponent<ActiveGameObject>().getActiveObject().name.Contains("Stove")) 
        {
            tempOn = !tempOn; 
            tempMenu.SetActive(tempOn); // toggling the dial menu 
            player.transform.GetComponent<CharacterMovement>().enabled = !tempOn; // toggling character movement 
            Debug.Log("Show Stove Dial" + tempOn);

            if(!tempOn) // if false => closing menu
            {
                // get temp reading here.
            }
        }


        // Dial Rotation
        float inputH = -1*Input.GetAxisRaw("Horizontal");
        float inputV = -1*Input.GetAxisRaw("Vertical");

        if(tempOn) {
            if(inputV>0 && !inputProcessed){
                //TODO: Rotate dial and reset 
                rotateDialAntiClockwise();
                inputProcessed = true;
            }
            if(inputV<0 && !inputProcessed){
                rotateDialClockwise();
                inputProcessed = true;
            }
            if(inputV == 0){
                inputProcessed = false;
            }
        }
    }

    void rotateDialAntiClockwise() {
        pointerDial.transform.Rotate(0, 0, pointerAngle);
    }

    void rotateDialClockwise() {
        pointerDial.transform.Rotate(0, 0, -pointerAngle);
    }


}
