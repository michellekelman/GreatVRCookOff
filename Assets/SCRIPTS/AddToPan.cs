using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;
using TMPro;

public class AddToPan : MonoBehaviour, IPointerEnterHandler, IPointerExitHandler
{
    public GameObject player;
    public GameObject breadSlice1;
    public GameObject breadSlice2;
    public GameObject halfSw;
    public GameObject rawSw;
    public GameObject cookedSw;
    public GameObject spatulaSw;
    public GameObject reticle;
    public GameObject label;
    private bool reticlein;
    private string B;
    private string[] bMap;
    private int flipping;
    public AudioClip clip;
    public AudioClip clip2;

    // Start is called before the first frame update
    void Start()
    {
        bMap = player.GetComponent<ButtonMapping>().getMap();
        B = bMap[1];
        flipping = 0;
    }

    // Update is called once per frame
    void Update()
    {
        //if half sandwich in pan add last bread
        if(reticlein && (player.GetComponent<Holding>().heldObj.name == "Bread_Butter1" || player.GetComponent<Holding>().heldObj.name == "Bread_Butter2") && halfSw.activeSelf)
        {
            player.GetComponent<InteractionQueueBehavior>().SetQueueMessage("Press A to Drop\nPress B to Interact");
            if(Input.GetButtonDown(B))
            {
                player.GetComponent<Holding>().heldObj.SetActive(false);
                player.GetComponent<Holding>().isHolding = false;
                player.GetComponent<Holding>().heldObj = new GameObject();
                halfSw.SetActive(false);
                rawSw.SetActive(true);
                rawSw.transform.parent = GetComponent<Transform>();
                rawSw.transform.position = GetComponent<Transform>().position + GetComponent<Transform>().up * -.05f + GetComponent<Transform>().right * .0625f + GetComponent<Transform>().forward * .35f;
                player.GetComponent<RecipeStepsBehavior>().setStep6True();
                player.GetComponent<InteractionQueueBehavior>().SetQueueMessage("");
                Invoke("FlipDelay", 3.0f);
            }
        }

        //if player adds Bread_Butter1 first
        if(reticlein && player.GetComponent<Holding>().heldObj.name == "Bread_Butter1" && !breadSlice2.activeSelf)
        {
            player.GetComponent<InteractionQueueBehavior>().SetQueueMessage("Press A to Drop\nPress B to Interact");
            if(Input.GetButtonDown(B))
            {
                player.GetComponent<Holding>().heldObj.SetActive(false);
                player.GetComponent<Holding>().isHolding = false;
                player.GetComponent<Holding>().heldObj = new GameObject();
                breadSlice1.SetActive(true);
                breadSlice1.transform.parent = GetComponent<Transform>();
                breadSlice1.transform.position = GetComponent<Transform>().position + GetComponent<Transform>().up * .125f + GetComponent<Transform>().right * .05f;
                player.GetComponent<RecipeStepsBehavior>().setStep4True();
                player.GetComponent<InteractionQueueBehavior>().SetQueueMessage("");
                AudioSource.PlayClipAtPoint(clip2, breadSlice1.transform.position, 0.2f);
            }
        }
        
        //if player adds Bread_Butter2 first
        if(reticlein && player.GetComponent<Holding>().heldObj.name == "Bread_Butter2" && !breadSlice1.activeSelf)
        {
            player.GetComponent<InteractionQueueBehavior>().SetQueueMessage("Press A to Drop\nPress B to Interact");
            if(Input.GetButtonDown(B))
            {
                player.GetComponent<Holding>().heldObj.SetActive(false);
                player.GetComponent<Holding>().isHolding = false;
                player.GetComponent<Holding>().heldObj = new GameObject();
                breadSlice2.SetActive(true);
                breadSlice2.transform.parent = GetComponent<Transform>();
                breadSlice2.transform.position = GetComponent<Transform>().position + GetComponent<Transform>().up * .125f + GetComponent<Transform>().right * .05f;
                player.GetComponent<RecipeStepsBehavior>().setStep4True();
                player.GetComponent<InteractionQueueBehavior>().SetQueueMessage("");
                AudioSource.PlayClipAtPoint(clip2, breadSlice2.transform.position, 0.2f);
            }
        }

        //if bread in pan add cheese
        if(reticlein && player.GetComponent<Holding>().heldObj.name == "CheeseSlice" && (breadSlice1.activeSelf || breadSlice2.activeSelf))
        {
            player.GetComponent<InteractionQueueBehavior>().SetQueueMessage("Press A to Drop\nPress B to Interact");
            if(Input.GetButtonDown(B))
            {
                player.GetComponent<Holding>().heldObj.SetActive(false);
                player.GetComponent<Holding>().isHolding = false;
                player.GetComponent<Holding>().heldObj = new GameObject();
                if(breadSlice1.activeSelf)
                {
                    breadSlice1.SetActive(false);
                }
                if(breadSlice2.activeSelf)
                {
                    breadSlice2.SetActive(false);
                }
                halfSw.SetActive(true);
                halfSw.transform.parent = GetComponent<Transform>();
                halfSw.transform.position = GetComponent<Transform>().position + GetComponent<Transform>().up * -.05f + GetComponent<Transform>().right * .0625f + GetComponent<Transform>().forward * .35f;
                player.GetComponent<RecipeStepsBehavior>().setStep5True();
                player.GetComponent<InteractionQueueBehavior>().SetQueueMessage("");
            }
        }

        //if holding spatula and sandwich ready to flip
        if(reticlein && player.GetComponent<Holding>().heldObj.name == "Spatula" && rawSw.activeSelf)
        {
            if(Input.GetButtonDown(B) && label.activeSelf)
            {
                flipping = 1;
                label.SetActive(false);
                player.GetComponent<RecipeStepsBehavior>().setStep7True();
            }

        }

        if (flipping>0) {
            if (flipping < 20) {
                //Debug.Log("up");
                rawSw.transform.position = new Vector3(rawSw.transform.position.x, rawSw.transform.position.y + 0.02f, rawSw.transform.position.z);
                flipping = flipping+1;
            }
            else if (flipping < 40) {
                //Debug.Log("turn");
                rawSw.transform.Rotate(Vector3.right * -9, Space.Self); 
                rawSw.transform.position = new Vector3(rawSw.transform.position.x, rawSw.transform.position.y + 0.02f, rawSw.transform.position.z - 0.03f);
                flipping = flipping+1;
            }
            else if (flipping < 60) {
                //Debug.Log("down");
                rawSw.transform.position = new Vector3(rawSw.transform.position.x, rawSw.transform.position.y - 0.02f, rawSw.transform.position.z);
                flipping = flipping+1;
            }
            else if (flipping==60) {
                rawSw.SetActive(false);
                cookedSw.SetActive(true);
                cookedSw.transform.parent = GetComponent<Transform>();
                cookedSw.transform.position = GetComponent<Transform>().position + GetComponent<Transform>().up * -.05f + GetComponent<Transform>().right * .0625f + GetComponent<Transform>().forward * .35f;
                flipping = 0;
                Invoke("DoneDelay", 3.0f);
            }
        }

        //if holding spatula and sandwich done cooking
        else if(reticlein && player.GetComponent<Holding>().heldObj.name == "Spatula" && cookedSw.activeSelf) //Add check to see if the sandwich has been flipped and cooked first
        {
            player.GetComponent<InteractionQueueBehavior>().SetQueueMessage("Press A to Drop\nPress B to Interact");
            if(Input.GetButtonDown(B) && label.activeSelf)
            {
                cookedSw.SetActive(false);
                label.SetActive(false);
                player.GetComponent<Holding>().heldObj.SetActive(false);
                spatulaSw.SetActive(true);
                player.GetComponent<Holding>().heldObj = spatulaSw;
                spatulaSw.transform.parent = reticle.transform;
                spatulaSw.transform.position = Camera.main.transform.position + Camera.main.transform.forward * 1.0f + Camera.main.transform.right * .25f;
                spatulaSw.transform.rotation = Quaternion.Euler(Camera.main.transform.rotation.eulerAngles.x, Camera.main.transform.rotation.eulerAngles.y, Camera.main.transform.rotation.eulerAngles.z);
                spatulaSw.transform.Rotate(0, -45f, 45f, Space.Self);
                spatulaSw.transform.position = spatulaSw.transform.position + Camera.main.transform.right * .25f;
                player.GetComponent<InteractionQueueBehavior>().SetQueueMessage("");
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

    void FlipDelay() {
        label.SetActive(true);    
        label.GetComponent<TMP_Text>().text = "FLIP";
        AudioSource.PlayClipAtPoint(clip, rawSw.transform.position, 0.5f);
    }

    void DoneDelay() {
        label.SetActive(true);
        label.GetComponent<TMP_Text>().text = "DONE";
        AudioSource.PlayClipAtPoint(clip, cookedSw.transform.position, 0.5f);
    }
}
