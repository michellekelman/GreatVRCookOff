using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;

public class ButterBread : MonoBehaviour, IPointerEnterHandler, IPointerExitHandler
{
    public GameObject bread;
    public GameObject butteredBread;
    public GameObject knife;
    public GameObject player;
    private bool reticlein;
    private string B;
    private string[] bMap;
    // Start is called before the first frame update
    void Start()
    {
        bMap = player.GetComponent<ButtonMapping>().getMap();
        B = bMap[1];
    }

    // Update is called once per frame
    void Update()
    {
        if(reticlein && player.GetComponent<Holding>().heldObj.name == "Knife_Butter")
        {
            player.GetComponent<InteractionQueueBehavior>().SetQueueMessage("Press B to Interact");
            if(Input.GetButtonDown(B))
            {
                bread.SetActive(false);
                butteredBread.SetActive(true);
                player.GetComponent<Holding>().heldObj.SetActive(false);
                player.GetComponent<Holding>().heldObj = knife;
                player.GetComponent<Holding>().heldObj.SetActive(true);
                player.GetComponent<RecipeStepsBehavior>().incrementStep3();
                player.GetComponent<InteractionQueueBehavior>().SetInteractionPending(false);
                player.GetComponent<InteractionQueueBehavior>().SetQueueMessage("");
            }
        }
    }

    public void OnPointerEnter(PointerEventData eventData) 
    {
        reticlein = true;
        if (player.GetComponent<Holding>().heldObj.name == "Knife_Butter")
            player.GetComponent<InteractionQueueBehavior>().SetInteractionPending(true);
        else
            player.GetComponent<InteractionQueueBehavior>().SetInteractionPending(false);
    }

    public void OnPointerExit(PointerEventData eventData) 
    {
        reticlein = false;
        player.GetComponent<InteractionQueueBehavior>().SetInteractionPending(false);
        player.GetComponent<InteractionQueueBehavior>().SetQueueMessage("");
    }
}
