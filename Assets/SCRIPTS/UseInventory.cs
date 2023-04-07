using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class UseInventory : MonoBehaviour
{
    public GameObject player;
    string X;
    string[] bMap;
    
    // Start is called before the first frame update
    void Start()
    {
        bMap = player.GetComponent<ButtonMapping>().getMap();
        X = bMap[2];
    }

    // Update is called once per frame
    void Update()
    {
        GameObject activeObj = player.GetComponent<ActiveGameObject>().getActiveObject();

        if(Input.GetButtonDown(X) && activeObj != null) 
        { 
            Debug.Log("Here" + activeObj.name);
            if( activeObj.name.Contains("Bread")) {
                player.GetComponent<InventoryMenu>().addObj("Bread", activeObj); 
                activeObj.SetActive(false); 
            }
            else if(activeObj.name.Contains("Cheese")) {
                player.GetComponent<InventoryMenu>().addObj("Cheese", activeObj); 
                activeObj.SetActive(false);
            } 
            else if (activeObj.name.Contains("Butter")) {
                player.GetComponent<InventoryMenu>().addObj("Butter", activeObj); 
                activeObj.SetActive(false);
            }
            player.GetComponent<InventoryMenu>().loadInventory();
        }

        if(Input.GetButtonDown(X) && activeObj != null) {
            int itemsInInvent = player.GetComponent<InventoryMenu>().getCount();
            if( activeObj.name.Contains("Table") && itemsInInvent==3) {
                int startIndex = activeObj.name.IndexOf("(");
                string boardNumber = activeObj.name.Substring(startIndex+1,1);
                GameObject kitchenItems = GameObject.Find("KitchenItems "+"("+boardNumber+")");
                GameObject foodBoard = kitchenItems.transform.GetChild(0).gameObject;
                foodBoard.SetActive(true);
                player.GetComponent<InventoryMenu>().hideInvent();
                activeObj.GetComponent<Outline>().enabled = false;
                activeObj.GetComponent<Highlight>().enabled = false;
                player.GetComponent<InventoryMenu>().enabled = false;
                player.GetComponent<RecipeStepsBehavior>().setStep1True();
                Debug.Log("asdhfkljasjdflkajsdlkfjasdlkf");
            }
        }
        
    }
}
