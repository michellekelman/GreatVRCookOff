using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;

public class ButterKnife : MonoBehaviour
{
    public GameObject player;
    public GameObject reticle;
    public GameObject butteredBread1;
    public GameObject butteredBread2;
    public GameObject butteredKnife;
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
                butteredKnife = GameObject.Find("KitchenItems (1)/Equipment/Knife_Butter");
            }
            else if(player.transform.parent.gameObject.name == "Player2")
            {
                butteredKnife = GameObject.Find("KitchenItems (2)/Equipment/Knife_Butter");
            }
            else if(player.transform.parent.gameObject.name == "Player3")
            {
                butteredKnife = GameObject.Find("KitchenItems (3)/Equipment/Knife_Butter");
            }
            else if(player.transform.parent.gameObject.name == "Player4")
            {
                butteredKnife = GameObject.Find("KitchenItems (4)/Equipment/Knife_Butter");
            }
        }
    }

    // Update is called once per frame
    void Update()
    {
        if(player.transform.parent != null)
        {
            if(player.transform.parent.gameObject.name == "Player1")
            {
                butteredBread1 = GameObject.Find("KitchenItems (1)/Food/Bread_Butter1");
                butteredBread2 = GameObject.Find("KitchenItems (1)/Food/Bread_Butter2");
            }
            else if(player.transform.parent.gameObject.name == "Player2")
            {
                butteredBread1 = GameObject.Find("KitchenItems (2)/Food/Bread_Butter1");
                butteredBread2 = GameObject.Find("KitchenItems (2)/Food/Bread_Butter2");
            }
            else if(player.transform.parent.gameObject.name == "Player3")
            {
                butteredBread1 = GameObject.Find("KitchenItems (3)/Food/Bread_Butter1");
                butteredBread2 = GameObject.Find("KitchenItems (3)/Food/Bread_Butter2");
            }
            else if(player.transform.parent.gameObject.name == "Player4")
            {
                butteredBread1 = GameObject.Find("KitchenItems (4)/Food/Bread_Butter1");
                butteredBread2 = GameObject.Find("KitchenItems (4)/Food/Bread_Butter2");
            }             
        }
        GameObject activeObj = player.GetComponent<ActiveGameObject>().getActiveObject();
        if(activeObj != null && activeObj.name.Contains("Butter") && player.GetComponent<Holding>().heldObj != null && player.GetComponent<Holding>().heldObj.name == "Knife" && butteredBread1 != null && butteredBread2 != null && (!butteredBread1.activeSelf || !butteredBread2.activeSelf))
        {
            player.GetComponent<InteractionQueueBehavior>().SetInteractionPending(true);
            player.GetComponent<InteractionQueueBehavior>().SetQueueMessage("Press A to Drop\nPress B to Interact");
            if(Input.GetButtonDown(B))
            {
                player.GetComponent<Holding>().heldObj.SetActive(false);
                player.GetComponent<Holding>().heldObj = butteredKnife;
                player.GetComponent<Holding>().heldObj.SetActive(true);
                butteredKnife.transform.parent = reticle.transform;
                butteredKnife.transform.position = Camera.main.transform.position + Camera.main.transform.forward * .75f + Camera.main.transform.right * .25f;
                butteredKnife.transform.rotation = Quaternion.Euler(Camera.main.transform.rotation.eulerAngles.x, Camera.main.transform.rotation.eulerAngles.y, Camera.main.transform.rotation.eulerAngles.z);
                if(player.transform.parent.gameObject.name == "Player1" || player.transform.parent.gameObject.name == "Player2")
                {
                    butteredKnife.transform.Rotate(0, 0, 90f, Space.Self);
                }
                else if(player.transform.parent.gameObject.name == "Player3" || player.transform.parent.gameObject.name == "Player4")
                {
                    butteredKnife.transform.Rotate(0, 0, -90f, Space.Self);
                }
                player.GetComponent<InteractionQueueBehavior>().SetQueueMessage("");
            }
        }
        else
        {
            player.GetComponent<InteractionQueueBehavior>().SetInteractionPending(false);
        }
    }
}
