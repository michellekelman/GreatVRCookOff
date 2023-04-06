using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class UseInventory : MonoBehaviour
{
    public GameObject player;
    string X;
    // Start is called before the first frame update
    void Start()
    {
        X = "js1";
    }

    // Update is called once per frame
    void Update()
    {
        GameObject activeObj = player.GetComponent<ActiveGameObject>().getActiveObject();

        if(Input.GetButtonDown(X) && activeObj != null) 
        { 
            Debug.Log("Here" + activeObj.name);
            if( activeObj.name.Contains("Bread") ||
              activeObj.name.Contains("Cheese") ||
                activeObj.name.Contains("Butter")) {
                // GameObject activeObj = player.GetComponent<ActiveGameObject>().getActiveObject();
                player.GetComponent<InventoryMenu>().addObj(activeObj.name, activeObj);
                activeObj.SetActive(false);
            }
        }
    }


}
