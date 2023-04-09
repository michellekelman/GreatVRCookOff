using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;

public class HeatPan : MonoBehaviour, IPointerEnterHandler, IPointerExitHandler
{
    public GameObject player;
    public GameObject stovePan;
    private bool reticlein;
    private string B;
    private string[] bMap;

    // Start is called before the first frame update
    void Start()
    {
        stovePan.SetActive(false);
        bMap = player.GetComponent<ButtonMapping>().getMap();
        B = bMap[1];
    }

    // Update is called once per frame
    void Update()
    {
        if(reticlein && player.GetComponent<Holding>().heldObj.name == "Pan")
        {
            player.GetComponent<InteractionQueueBehavior>().SetQueueMessage("Press A to Drop\nPress B to Interact");
            if(Input.GetButtonDown(B))
            {
                player.GetComponent<Holding>().heldObj.SetActive(false);
                player.GetComponent<Holding>().isHolding = false;
                player.GetComponent<Holding>().heldObj = new GameObject();
                stovePan.SetActive(true);
                player.GetComponent<RecipeStepsBehavior>().setStep2True();
                player.GetComponent<InteractionQueueBehavior>().SetQueueMessage("");
            }
            //Add temp menu stuff
        }        
    }

    public void OnPointerEnter(PointerEventData eventData) 
    {
        reticlein = true;
        player.GetComponent<InteractionQueueBehavior>().SetInteractionPending(true);
    }

    public void OnPointerExit(PointerEventData eventData) 
    {
        reticlein = false;
        player.GetComponent<InteractionQueueBehavior>().SetInteractionPending(false);
    }    
}
