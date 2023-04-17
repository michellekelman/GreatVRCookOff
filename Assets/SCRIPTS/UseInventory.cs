using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class UseInventory : MonoBehaviour
{
    public GameObject player;
    string B;
    string[] bMap;
    public AudioClip clip;
    
    // Start is called before the first frame update
    void Start()
    {
        bMap = player.GetComponent<ButtonMapping>().getMap();
        B = bMap[1];
    }

    // Update is called once per frame
    void Update()
    {
        GameObject activeObj = player.GetComponent<ActiveGameObject>().getActiveObject();
        int itemsInInvent = player.GetComponent<InventoryMenu>().getCount();
        if (activeObj != null)
        {
            if (activeObj.name.Contains("Bread") || activeObj.name.Contains("Cheese") || activeObj.name.Contains("Butter")) {
                player.GetComponent<InteractionQueueBehavior>().SetQueueMessage("Press B to Store");
            }
            else if (activeObj.name.Contains("Table") && itemsInInvent==3) {
                player.GetComponent<InteractionQueueBehavior>().SetQueueMessage("Press B to Interact");
            }
        }
        if (activeObj == null)
        {
            player.GetComponent<InteractionQueueBehavior>().SetQueueMessage("");
        }
        if(Input.GetButtonDown(B) && activeObj != null && activeObj.GetComponent<Outline>().enabled) 
        { 
            // Debug.Log("Here" + activeObj.name);
            if( activeObj.name.Contains("Bread")) {
                player.GetComponent<InventoryMenu>().addObj("Bread", activeObj); 
                activeObj.SetActive(false);
                player.GetComponent<ActiveGameObject>().setActiveObject(null);
            }
            else if(activeObj.name.Contains("Cheese")) {
                player.GetComponent<InventoryMenu>().addObj("Cheese", activeObj); 
                activeObj.SetActive(false);
                player.GetComponent<ActiveGameObject>().setActiveObject(null);
            } 
            else if (activeObj.name.Contains("Butter")) {
                player.GetComponent<InventoryMenu>().addObj("Butter", activeObj); 
                activeObj.SetActive(false);
                player.GetComponent<ActiveGameObject>().setActiveObject(null);
            }
            player.GetComponent<InventoryMenu>().loadInventory();
        }

        if(Input.GetButtonDown(B) && activeObj != null) {
            if(activeObj.name.Contains("Table") && itemsInInvent==3) {
                int startIndex = activeObj.name.IndexOf("(");
                string boardNumber = activeObj.name.Substring(startIndex+1,1);
                GameObject kitchenItems = GameObject.Find("KitchenItems "+"("+boardNumber+")");
                GameObject foodBoard = kitchenItems.transform.GetChild(0).gameObject;
                foodBoard.SetActive(true);
                player.GetComponent<InventoryMenu>().hideInvent();
                activeObj.GetComponent<Outline>().enabled = false;
                activeObj.GetComponent<Highlight>().enabled = false;
                player.GetComponent<RecipeStepsBehavior>().setStep1True();
                player.GetComponent<UseInventory>().enabled = false;
                player.GetComponent<ActiveGameObject>().setActiveObject(null);
                player.GetComponent<InteractionQueueBehavior>().SetQueueMessage("");
                AudioSource.PlayClipAtPoint(clip, foodBoard.transform.position, 0.5f);
            }
        }
        
    }
}
