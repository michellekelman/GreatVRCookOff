using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TempMenu : MonoBehaviour
{
    public GameObject pointerDial;
    public GameObject player;
    public GameObject tempMenu;
    public GameObject settingsMenu;
    bool inputProcessed;
    int pointerAngle; 
    int currAngle;
    bool tempOn;
    private string B;
    private string[] bMap;

    // Start is called before the first frame update
    void Start()
    {
        bMap = player.GetComponent<ButtonMapping>().getMap();
        B = bMap[1];
        inputProcessed = false;
        pointerAngle = 45;
        tempOn = false;
        currAngle = 0;
        pointerDial = tempMenu.transform.Find("Pointer").gameObject;
    }

    // Update is called once per frame
    void Update()
    {
        if (!player.GetComponent<Holding>().isHolding && player.GetComponent<ActiveGameObject>().getActiveObject() != null &&
            player.GetComponent<ActiveGameObject>().getActiveObject().name.Contains("Stove"))
        {
            player.GetComponent<InteractionQueueBehavior>().SetQueueMessage("Press B to Interact");
        }
        else if (player.GetComponent<ActiveGameObject>().getActiveObject() == null && player.GetComponent<InteractionQueueBehavior>().getCurrentQueue() == "Press B to Interact")
        {
            player.GetComponent<InteractionQueueBehavior>().SetQueueMessage("");
        }

        // pressing B to interact with stove
        if (Input.GetButtonDown(B) && !settingsMenu.activeSelf)
        {
            if (!player.GetComponent<Holding>().isHolding &&
            player.GetComponent<ActiveGameObject>().getActiveObject() != null &&
            player.GetComponent<ActiveGameObject>().getActiveObject().name.Contains("Stove") && !tempOn)
            {
                tempOn = true; 
                tempMenu.SetActive(tempOn); // toggling the dial menu 
                player.transform.GetComponent<CharacterMovement>().enabled = false; // toggling character movement 
                // Debug.Log("Show Stove Dial" + tempOn); 
            }
            else if (tempOn)
            {
                if(currAngle==180 || currAngle== -180){
                    // Debug.Log("Oven set to med");
                    player.GetComponent<RecipeStepsBehavior>().setStep2True();
                    this.enabled = false;
                }
                tempOn = false;
                tempMenu.SetActive(tempOn);
                player.transform.GetComponent<CharacterMovement>().enabled = true;
                player.GetComponent<InteractionQueueBehavior>().SetQueueMessage("");
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

            //Debug.Log("Curr Angle is: "+currAngle);
        }
    }

    void rotateDialAntiClockwise() {
        pointerDial.transform.Rotate(0, 0, pointerAngle);
        currAngle += pointerAngle;
        if(currAngle%360==0){
            currAngle=0;
        }
    }

    void rotateDialClockwise() {
        pointerDial.transform.Rotate(0, 0, -pointerAngle);
        currAngle -= pointerAngle;
         if(currAngle%360==0){
            currAngle=0;
        }

    }


}
