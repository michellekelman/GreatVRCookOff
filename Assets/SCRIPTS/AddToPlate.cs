using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;

public class AddToPlate : MonoBehaviour, IPointerEnterHandler, IPointerExitHandler
{
    public GameObject player;
    public GameObject spatula;
    public GameObject cookedSw;
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
        if(reticlein && player.GetComponent<Holding>().heldObj.name == "SpatulaSW")
        {
            player.GetComponent<InteractionQueueBehavior>().SetQueueMessage("Press B to Interact");
            if(Input.GetButtonDown(B))
            {
                player.GetComponent<Holding>().heldObj.SetActive(false);
                spatula.SetActive(true);
                spatula.GetComponent<Grab>().ReturnObject(spatula);
                cookedSw.SetActive(true);
                cookedSw.transform.parent = GetComponent<Transform>();
                cookedSw.transform.position = GetComponent<Transform>().position + GetComponent<Transform>().up * -.05f + GetComponent<Transform>().right * .1f + GetComponent<Transform>().forward * -.3f;
                cookedSw.transform.Rotate(0, -90f, 0 , Space.Self);
                player.GetComponent<InteractionQueueBehavior>().SetQueueMessage("");
                player.GetComponent<RecipeStepsBehavior>().setStep8True();
            }
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
