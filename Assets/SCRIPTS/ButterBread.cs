using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;

public class ButterBread : MonoBehaviour
{
    public GameObject player;
    public GameObject knife;
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
                knife = GameObject.Find("KitchenItems (1)/Equipment/Knife");
            }
            else if(player.transform.parent.gameObject.name == "Player2")
            {
                knife = GameObject.Find("KitchenItems (2)/Equipment/Knife");
            }
            else if(player.transform.parent.gameObject.name == "Player3")
            {
                knife = GameObject.Find("KitchenItems (3)/Equipment/Knife");
            }
            else if(player.transform.parent.gameObject.name == "Player4")
            {
                knife = GameObject.Find("KitchenItems (4)/Equipment/Knife");
            }
        }
    }

    // Update is called once per frame
    void Update()
    {
        GameObject activeObj = player.GetComponent<ActiveGameObject>().getActiveObject();
        if(activeObj != null && activeObj.name.Contains("BreadSlice") && player.GetComponent<Holding>().heldObj != null && player.GetComponent<Holding>().heldObj.name == "Knife_Butter")
        {
            player.GetComponent<InteractionQueueBehavior>().SetInteractionPending(true);
            player.GetComponent<InteractionQueueBehavior>().SetQueueMessage("Press B to Interact");
            if(Input.GetButtonDown(B))
            {
                activeObj.SetActive(false);
                if(player.transform.parent.gameObject.name == "Player1")
                {
                    if(activeObj.name.Contains("1"))
                    {
                        GameObject.Find("KitchenItems (1)/Food/Bread_Butter1").SetActive(true);
                    }
                    else
                    {
                        GameObject.Find("KitchenItems (1)/Food/Bread_Butter2").SetActive(true); 
                    }
                }
                else if(player.transform.parent.gameObject.name == "Player2")
                {
                    if(activeObj.name.Contains("1"))
                    {
                        GameObject.Find("KitchenItems (2)/Food/Bread_Butter1").SetActive(true);
                    }
                    else
                    {
                        GameObject.Find("KitchenItems (2)/Food/Bread_Butter2").SetActive(true); 
                    }
                }
                else if(player.transform.parent.gameObject.name == "Player3")
                {
                    if(activeObj.name.Contains("1"))
                    {
                        GameObject.Find("KitchenItems (3)/Food/Bread_Butter1").SetActive(true);
                    }
                    else
                    {
                        GameObject.Find("KitchenItems (3)/Food/Bread_Butter2").SetActive(true); 
                    }
                }
                else if(player.transform.parent.gameObject.name == "Player4")
                {
                    if(activeObj.name.Contains("1"))
                    {
                        GameObject.Find("KitchenItems (4)/Food/Bread_Butter1").SetActive(true);
                    }
                    else
                    {
                        GameObject.Find("KitchenItems (4)/Food/Bread_Butter2").SetActive(true); 
                    }
                }
                player.GetComponent<Holding>().heldObj.SetActive(false);
                player.GetComponent<Holding>().heldObj = knife;
                player.GetComponent<Holding>().heldObj.SetActive(true);
                player.GetComponent<RecipeStepsBehavior>().incrementStep3();
                player.GetComponent<InteractionQueueBehavior>().SetInteractionPending(false);
                player.GetComponent<InteractionQueueBehavior>().SetQueueMessage("");
            }
        }
        else
        {
            player.GetComponent<InteractionQueueBehavior>().SetInteractionPending(false);
            player.GetComponent<InteractionQueueBehavior>().SetQueueMessage("");
        }
    }
}
