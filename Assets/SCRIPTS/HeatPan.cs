using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;

public class HeatPan : MonoBehaviour
{
    public GameObject player;
    public GameObject stovePan;
    private string B;
    private string[] bMap;
    public AudioClip clip;

    // Start is called before the first frame update
    void Start()
    {
        bMap = player.GetComponent<ButtonMapping>().getMap();
        B = bMap[1];
        if(player.transform.parent != null)
        {
            if(player.transform.parent.gameObject.name == "Player1")
            {
                stovePan = GameObject.Find("KitchenItems (1)/Equipment/StovePan");
            }
            else if(player.transform.parent.gameObject.name == "Player2")
            {
                stovePan = GameObject.Find("KitchenItems (2)/Equipment/StovePan");
            }
            else if(player.transform.parent.gameObject.name == "Player3")
            {
                stovePan = GameObject.Find("KitchenItems (3)/Equipment/StovePan");
            }
            else if(player.transform.parent.gameObject.name == "Player4")
            {
                stovePan = GameObject.Find("KitchenItems (4)/Equipment/StovePan");
            }
        }
    }

    // Update is called once per frame
    void Update()
    {
        GameObject activeObj = player.GetComponent<ActiveGameObject>().getActiveObject();
        if(activeObj != null && activeObj.name.Contains("Stove") && player.GetComponent<Holding>().heldObj != null && player.GetComponent<Holding>().heldObj.name == "Pan")
        {
            player.GetComponent<InteractionQueueBehavior>().SetInteractionPending(true);
            player.GetComponent<InteractionQueueBehavior>().SetQueueMessage("Press A to Drop\nPress B to Interact");
            if(Input.GetButtonDown(B))
            {
                player.GetComponent<Holding>().heldObj.SetActive(false);
                player.GetComponent<Holding>().isHolding = false;
                player.GetComponent<Holding>().heldObj = null;
                stovePan.SetActive(true);
                player.GetComponent<RecipeStepsBehavior>().setStep2True();
                player.GetComponent<InteractionQueueBehavior>().SetQueueMessage("");
                AudioSource.PlayClipAtPoint(clip, stovePan.transform.position, 0.5f);
            }
        }
        else
        {
            player.GetComponent<InteractionQueueBehavior>().SetInteractionPending(false);
        }        
    }
}
