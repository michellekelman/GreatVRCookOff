using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;

public class AddToPlate : MonoBehaviour
{
    public GameObject player;
    public GameObject spatula;
    public GameObject cookedSw;
    private GameObject plate;
    private string B;
    private string[] bMap;

    // Start is called before the first frame update
    void Start()
    {
        bMap = player.GetComponent<ButtonMapping>().getMap();
        B = bMap[1];
        if(player.transform.parent != null)
        {
            if(player.transform.parent.gameObject.name == "Player1")
            {
                GameObject kitchenItems = GameObject.Find("KitchenItems (1)");
                GameObject foodBoard = kitchenItems.transform.GetChild(0).gameObject;
                foodBoard.SetActive(true);
                cookedSw = GameObject.Find("KitchenItems (1)/Food/CookedSW");
                spatula = GameObject.Find("KitchenItems (1)/Equipment/Spatula");
                foodBoard.SetActive(false);
            }
            else if(player.transform.parent.gameObject.name == "Player2")
            {
                GameObject kitchenItems = GameObject.Find("KitchenItems (2)");
                GameObject foodBoard = kitchenItems.transform.GetChild(0).gameObject;
                foodBoard.SetActive(true);
                cookedSw = GameObject.Find("KitchenItems (2)/Food/CookedSW");
                spatula = GameObject.Find("KitchenItems (2)/Equipment/Spatula");
                foodBoard.SetActive(false);
            }
            else if(player.transform.parent.gameObject.name == "Player3")
            {
                GameObject kitchenItems = GameObject.Find("KitchenItems (3)");
                GameObject foodBoard = kitchenItems.transform.GetChild(0).gameObject;
                foodBoard.SetActive(true);
                cookedSw = GameObject.Find("KitchenItems (3)/Food/CookedSW");
                spatula = GameObject.Find("KitchenItems (3)/Equipment/Spatula");
                foodBoard.SetActive(false);
            }
            else if(player.transform.parent.gameObject.name == "Player4")
            {
                GameObject kitchenItems = GameObject.Find("KitchenItems (4)");
                GameObject foodBoard = kitchenItems.transform.GetChild(0).gameObject;
                foodBoard.SetActive(true);
                cookedSw = GameObject.Find("KitchenItems (4)/Food/CookedSW");
                spatula = GameObject.Find("KitchenItems (4)/Equipment/Spatula");
                foodBoard.SetActive(false);
            }
        }
    }

    // Update is called once per frame
    void Update()
    {
        GameObject activeObj = player.GetComponent<ActiveGameObject>().getActiveObject();
        if(activeObj != null && activeObj.name.Contains("Plate") && player.GetComponent<Holding>().heldObj != null && player.GetComponent<Holding>().heldObj.name == "SpatulaSW")
        {
            plate = activeObj;
            player.GetComponent<InteractionQueueBehavior>().SetInteractionPending(true);
            player.GetComponent<InteractionQueueBehavior>().SetQueueMessage("Press B to Interact");
            if(Input.GetButtonDown(B))
            {
                player.GetComponent<Holding>().heldObj.SetActive(false);
                spatula.SetActive(true);
                GetComponent<Grab>().ReturnObject(spatula);
                cookedSw.SetActive(true);
                cookedSw.transform.parent = plate.GetComponent<Transform>();
                if(player.transform.parent.gameObject.name == "Player1" || player.transform.parent.gameObject.name == "Player2")
                {
                    cookedSw.transform.position = plate.GetComponent<Transform>().position + plate.GetComponent<Transform>().up * -.05f + plate.GetComponent<Transform>().right * .1f + plate.GetComponent<Transform>().forward * -.3f;
                }
                else if(player.transform.parent.gameObject.name == "Player3" || player.transform.parent.gameObject.name == "Player4")
                {
                    cookedSw.transform.position = plate.GetComponent<Transform>().position + plate.GetComponent<Transform>().up * -.05f + plate.GetComponent<Transform>().right * -.1f + plate.GetComponent<Transform>().forward * -.3f;
                }
                cookedSw.transform.Rotate(0, -90f, 0 , Space.Self);
                player.GetComponent<InteractionQueueBehavior>().SetQueueMessage("");
                player.GetComponent<RecipeStepsBehavior>().setStep8True();
            }
        }
        else
        {
            player.GetComponent<InteractionQueueBehavior>().SetInteractionPending(false);
        }                    
    }
}
