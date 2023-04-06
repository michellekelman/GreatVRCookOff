using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class UseInventory : MonoBehaviour
{
    public GameObject player;
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        if(Input.GetButtonDown(X) && 
            player.GetComponent<ActiveGameObject>().getActiveObject() != null &&
            (player.GetComponent<ActiveGameObject>().getActiveObject().name.Contains("Bread") ||
            player.GetComponent<ActiveGameObject>().getActiveObject().name.Contains("Cheese") ||
            player.GetComponent<ActiveGameObject>().getActiveObject().name.Contains("Butter")) ) 
        { 
            GameObject activeObj = player.GetComponent<ActiveGameObject>().getActiveObject();
            player.GetComponent<InventoryMenu>().addObj(player.GetComponent<ActiveGameObject>().getActiveObject());
        }
    }


}
