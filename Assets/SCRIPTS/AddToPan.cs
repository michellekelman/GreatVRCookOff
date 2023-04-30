using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;
using TMPro;

public class AddToPan : MonoBehaviour
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
    private GameObject stovePan;
    private string B;
    private string[] bMap;
    private int flipping;
    private bool doneFlipping; //added to work around invoke, may not be needed
    public AudioClip clip;
    public AudioClip clip2;

    // Start is called before the first frame update
    void Start()
    {
        bMap = player.GetComponent<ButtonMapping>().getMap();
        B = bMap[1];
        flipping = 0;
        doneFlipping = false;
        if(player.transform.parent != null)
        {
            if(player.transform.parent.gameObject.name == "Player1")
            {
                GameObject kitchenItems = GameObject.Find("KitchenItems (1)");
                GameObject foodBoard = kitchenItems.transform.GetChild(0).gameObject;
                foodBoard.SetActive(true);
                breadSlice1 = GameObject.Find("KitchenItems (1)/Food/BreadSlice1");
                breadSlice2 = GameObject.Find("KitchenItems (1)/Food/BreadSlice2");
                halfSw = GameObject.Find("KitchenItems (1)/Food/Cheese_Bread");
                rawSw = GameObject.Find("KitchenItems (1)/Food/RawSW");
                cookedSw = GameObject.Find("KitchenItems (1)/Food/CookedSW");
                spatulaSw = GameObject.Find("KitchenItems (1)/Equipment/SpatulaSW");
                label = GameObject.Find("KitchenItems (1)/Equipment/StovePan/Canvas/Label");
                foodBoard.SetActive(false);
            }
            else if(player.transform.parent.gameObject.name == "Player2")
            {
                GameObject kitchenItems = GameObject.Find("KitchenItems (2)");
                GameObject foodBoard = kitchenItems.transform.GetChild(0).gameObject;
                foodBoard.SetActive(true);
                breadSlice1 = GameObject.Find("KitchenItems (2)/Food/BreadSlice1");
                breadSlice2 = GameObject.Find("KitchenItems (2)/Food/BreadSlice2");
                halfSw = GameObject.Find("KitchenItems (2)/Food/Cheese_Bread");
                rawSw = GameObject.Find("KitchenItems (2)/Food/RawSW");
                cookedSw = GameObject.Find("KitchenItems (2)/Food/CookedSW");
                spatulaSw = GameObject.Find("KitchenItems (2)/Equipment/SpatulaSW");
                label = GameObject.Find("KitchenItems (2)/Equipment/StovePan/Canvas/Label");
                foodBoard.SetActive(false);
            }
            else if(player.transform.parent.gameObject.name == "Player3")
            {
                GameObject kitchenItems = GameObject.Find("KitchenItems (3)");
                GameObject foodBoard = kitchenItems.transform.GetChild(0).gameObject;
                foodBoard.SetActive(true);
                breadSlice1 = GameObject.Find("KitchenItems (3)/Food/BreadSlice1");
                breadSlice2 = GameObject.Find("KitchenItems (3)/Food/BreadSlice2");
                halfSw = GameObject.Find("KitchenItems (3)/Food/Cheese_Bread");
                rawSw = GameObject.Find("KitchenItems (3)/Food/RawSW");
                cookedSw = GameObject.Find("KitchenItems (3)/Food/CookedSW");
                spatulaSw = GameObject.Find("KitchenItems (3)/Equipment/SpatulaSW");
                label = GameObject.Find("KitchenItems (3)/Equipment/StovePan/Canvas/Label");
                foodBoard.SetActive(false);
            }
            else if(player.transform.parent.gameObject.name == "Player4")
            {
                GameObject kitchenItems = GameObject.Find("KitchenItems (4)");
                GameObject foodBoard = kitchenItems.transform.GetChild(0).gameObject;
                foodBoard.SetActive(true);
                breadSlice1 = GameObject.Find("KitchenItems (4)/Food/BreadSlice1");
                breadSlice2 = GameObject.Find("KitchenItems (4)/Food/BreadSlice2");
                halfSw = GameObject.Find("KitchenItems (4)/Food/Cheese_Bread");
                rawSw = GameObject.Find("KitchenItems (4)/Food/RawSW");
                cookedSw = GameObject.Find("KitchenItems (4)/Food/CookedSW");
                spatulaSw = GameObject.Find("KitchenItems (4)/Equipment/SpatulaSW");
                label = GameObject.Find("KitchenItems (4)/Equipment/StovePan/Canvas/Label");
                foodBoard.SetActive(false);
            }
        }
    }

    // Update is called once per frame
    void Update()
    {
        GameObject activeObj = player.GetComponent<ActiveGameObject>().getActiveObject();
        //if half sandwich in pan add last bread
        if(activeObj != null && activeObj.name.Contains("Pan") && player.GetComponent<Holding>().heldObj != null && (player.GetComponent<Holding>().heldObj.name == "Bread_Butter1" || player.GetComponent<Holding>().heldObj.name == "Bread_Butter2") && halfSw.activeSelf)
        {
            player.GetComponent<InteractionQueueBehavior>().SetInteractionPending(true);
            player.GetComponent<InteractionQueueBehavior>().SetQueueMessage("Press A to Drop\nPress B to Interact");
            if(Input.GetButtonDown(B))
            {
                player.GetComponent<Holding>().heldObj.SetActive(false);
                player.GetComponent<Holding>().isHolding = false;
                player.GetComponent<Holding>().heldObj = null;
                halfSw.SetActive(false);
                rawSw.SetActive(true);
                rawSw.transform.parent = activeObj.GetComponent<Transform>();
                if(player.transform.parent.gameObject.name == "Player1" || player.transform.parent.gameObject.name == "Player2")
                {
                    rawSw.transform.position = activeObj.GetComponent<Transform>().position + activeObj.GetComponent<Transform>().up * -.05f + activeObj.GetComponent<Transform>().right * .0625f + activeObj.GetComponent<Transform>().forward * .35f;
                }
                else if(player.transform.parent.gameObject.name == "Player3" || player.transform.parent.gameObject.name == "Player4")
                {
                    rawSw.transform.position = activeObj.GetComponent<Transform>().position + activeObj.GetComponent<Transform>().up * -.05f + activeObj.GetComponent<Transform>().right * -.0625f + activeObj.GetComponent<Transform>().forward * .35f;
                }
                player.GetComponent<RecipeStepsBehavior>().setStep6True();
                player.GetComponent<InteractionQueueBehavior>().SetQueueMessage("");
                Invoke("FlipDelay", 3.0f); //currently does nothing, need to find way to do cooking delay
            }
        }

        //if player adds Bread_Butter1 first
        if(activeObj != null && activeObj.name.Contains("Pan") && player.GetComponent<Holding>().heldObj != null && player.GetComponent<Holding>().heldObj.name == "Bread_Butter1" && !breadSlice2.activeSelf)
        {
            player.GetComponent<InteractionQueueBehavior>().SetInteractionPending(true);
            player.GetComponent<InteractionQueueBehavior>().SetQueueMessage("Press A to Drop\nPress B to Interact");
            if(Input.GetButtonDown(B))
            {
                player.GetComponent<Holding>().heldObj.SetActive(false);
                player.GetComponent<Holding>().isHolding = false;
                player.GetComponent<Holding>().heldObj = null;
                breadSlice1.SetActive(true);
                breadSlice1.GetComponent<Highlight>().enabled = false;
                breadSlice1.GetComponent<Outline>().enabled = false;
                breadSlice1.transform.parent = activeObj.GetComponent<Transform>();
                if(player.transform.parent.gameObject.name == "Player1" || player.transform.parent.gameObject.name == "Player2")
                {
                    breadSlice1.transform.position = activeObj.GetComponent<Transform>().position + activeObj.GetComponent<Transform>().up * .125f + activeObj.GetComponent<Transform>().right * .05f;
                }
                else if(player.transform.parent.gameObject.name == "Player3" || player.transform.parent.gameObject.name == "Player4")
                {
                    breadSlice1.transform.position = activeObj.GetComponent<Transform>().position + activeObj.GetComponent<Transform>().up * .125f + activeObj.GetComponent<Transform>().right * -.05f;
                }
                player.GetComponent<RecipeStepsBehavior>().setStep4True();
                player.GetComponent<InteractionQueueBehavior>().SetQueueMessage("");
                AudioSource.PlayClipAtPoint(clip2, breadSlice1.transform.position, 0.2f);
            }
        }
        
        //if player adds Bread_Butter2 first
        if(activeObj != null && activeObj.name.Contains("Pan") && player.GetComponent<Holding>().heldObj != null && player.GetComponent<Holding>().heldObj.name == "Bread_Butter2" && !breadSlice1.activeSelf)
        {
            player.GetComponent<InteractionQueueBehavior>().SetInteractionPending(true);
            player.GetComponent<InteractionQueueBehavior>().SetQueueMessage("Press A to Drop\nPress B to Interact");
            if(Input.GetButtonDown(B))
            {
                player.GetComponent<Holding>().heldObj.SetActive(false);
                player.GetComponent<Holding>().isHolding = false;
                player.GetComponent<Holding>().heldObj = null;
                breadSlice2.SetActive(true);
                breadSlice2.GetComponent<Highlight>().enabled = false;
                breadSlice2.GetComponent<Outline>().enabled = false;
                breadSlice2.transform.parent = activeObj.GetComponent<Transform>();
                if(player.transform.parent.gameObject.name == "Player1" || player.transform.parent.gameObject.name == "Player2")
                {
                    breadSlice2.transform.position = activeObj.GetComponent<Transform>().position + activeObj.GetComponent<Transform>().up * .125f + activeObj.GetComponent<Transform>().right * .05f;
                }
                else if(player.transform.parent.gameObject.name == "Player3" || player.transform.parent.gameObject.name == "Player4")
                {
                    breadSlice2.transform.position = activeObj.GetComponent<Transform>().position + activeObj.GetComponent<Transform>().up * .125f + activeObj.GetComponent<Transform>().right * -.05f;
                }
                player.GetComponent<RecipeStepsBehavior>().setStep4True();
                player.GetComponent<InteractionQueueBehavior>().SetQueueMessage("");
                AudioSource.PlayClipAtPoint(clip2, breadSlice2.transform.position, 0.2f);
            }
        }

        //if bread in pan add cheese
        if(activeObj != null && activeObj.name.Contains("Pan") && player.GetComponent<Holding>().heldObj != null && player.GetComponent<Holding>().heldObj.name == "CheeseSlice" && (breadSlice1.activeSelf || breadSlice2.activeSelf) && (breadSlice1.transform.parent.name.Contains("Pan") || breadSlice2.transform.parent.name.Contains("Pan")))
        {
            player.GetComponent<InteractionQueueBehavior>().SetInteractionPending(true);
            player.GetComponent<InteractionQueueBehavior>().SetQueueMessage("Press A to Drop\nPress B to Interact");
            if(Input.GetButtonDown(B))
            {
                player.GetComponent<Holding>().heldObj.SetActive(false);
                player.GetComponent<Holding>().isHolding = false;
                player.GetComponent<Holding>().heldObj = null;
                if(breadSlice1.activeSelf)
                {
                    breadSlice1.SetActive(false);
                }
                if(breadSlice2.activeSelf)
                {
                    breadSlice2.SetActive(false);
                }
                halfSw.SetActive(true);
                halfSw.transform.parent = activeObj.GetComponent<Transform>();
                if(player.transform.parent.gameObject.name == "Player1" || player.transform.parent.gameObject.name == "Player2")
                {
                    halfSw.transform.position = activeObj.GetComponent<Transform>().position + activeObj.GetComponent<Transform>().up * -.05f + activeObj.GetComponent<Transform>().right * .0625f + activeObj.GetComponent<Transform>().forward * .35f;
                }
                else if(player.transform.parent.gameObject.name == "Player3" || player.transform.parent.gameObject.name == "Player4")
                {
                    halfSw.transform.position = activeObj.GetComponent<Transform>().position + activeObj.GetComponent<Transform>().up * -.05f + activeObj.GetComponent<Transform>().right * -.0625f + activeObj.GetComponent<Transform>().forward * .35f;
                }
                player.GetComponent<RecipeStepsBehavior>().setStep5True();
                player.GetComponent<InteractionQueueBehavior>().SetQueueMessage("");
            }
        }

        //if holding spatula and sandwich ready to flip
        if(activeObj != null && activeObj.name.Contains("Pan") && player.GetComponent<Holding>().heldObj != null && player.GetComponent<Holding>().heldObj.name == "Spatula" && rawSw.activeSelf)
        {
            stovePan = activeObj;
            player.GetComponent<InteractionQueueBehavior>().SetInteractionPending(true);
            if(Input.GetButtonDown(B)) //used to be && label.activeSelf) <- used to check for cooking delay, need to fix
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
                cookedSw.transform.parent = stovePan.GetComponent<Transform>();
                if(player.transform.parent.gameObject.name == "Player1" || player.transform.parent.gameObject.name == "Player2")
                {
                    cookedSw.transform.position = stovePan.GetComponent<Transform>().position + stovePan.GetComponent<Transform>().up * -.05f + stovePan.GetComponent<Transform>().right * .0625f + stovePan.GetComponent<Transform>().forward * .35f;
                }
                else if(player.transform.parent.gameObject.name == "Player3" || player.transform.parent.gameObject.name == "Player4")
                {
                    cookedSw.transform.position = stovePan.GetComponent<Transform>().position + stovePan.GetComponent<Transform>().up * -.05f + stovePan.GetComponent<Transform>().right * -.0625f + stovePan.GetComponent<Transform>().forward * .35f;
                }
                flipping = 0;
                doneFlipping = true;
                Invoke("DoneDelay", 3.0f); //currently does nothing, need to find way to do cooking delay
            }
        }

        //if holding spatula and sandwich done cooking
        else if(activeObj != null && activeObj.name.Contains("Pan") && player.GetComponent<Holding>().heldObj != null && player.GetComponent<Holding>().heldObj.name == "Spatula" && cookedSw.activeSelf) //Add check to see if the sandwich has been flipped and cooked first
        {
            player.GetComponent<InteractionQueueBehavior>().SetInteractionPending(true);
            player.GetComponent<InteractionQueueBehavior>().SetQueueMessage("Press A to Drop\nPress B to Interact");
            if(Input.GetButtonDown(B) && doneFlipping) //used to be && label.activeSelf <- need to check for cooking delay still
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
        else
        { 
            player.GetComponent<InteractionQueueBehavior>().SetInteractionPending(false);
        }
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
