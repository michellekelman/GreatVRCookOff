using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;

public class Grab : MonoBehaviour
{
    public GameObject obj;
    public GameObject reticle;
    public GameObject player;
    private Rigidbody objRB;
    private string B;
    private string A;
    private string[] bMap;

    // Start is called before the first frame update
    void Start()
    {
        bMap = player.GetComponent<ButtonMapping>().getMap();
        B = bMap[1];
        A = bMap[0];
    }

    // Update is called once per frame
    void Update()
    {
        obj= player.GetComponent<ActiveGameObject>().getActiveObject();

        if(player.GetComponent<Holding>().isHolding)
        {
            if (player.GetComponent<Holding>().heldObj.name != "Knife_Butter" && player.GetComponent<Holding>().heldObj.name != "SpatulaSW" && !player.GetComponent<InteractionQueueBehavior>().interactionPending)
            {
                player.GetComponent<InteractionQueueBehavior>().SetQueueMessage("Press A to Drop");
            }
            if(Input.GetButtonDown(A))
            {
                ReturnObject(player.GetComponent<Holding>().heldObj);
                player.GetComponent<InteractionQueueBehavior>().SetQueueMessage("");
            }
        }

        if(obj == null)
        {
            player.GetComponent<InteractionQueueBehavior>().SetQueueMessage("");
        }

        if(obj != null && obj.GetComponent<Grab>() != null)
        {
            if(!player.GetComponent<Holding>().isHolding)
            {
                player.GetComponent<InteractionQueueBehavior>().SetQueueMessage("Press B to Grab");
                
                if(Input.GetButtonDown(B))
                {
                    player.GetComponent<Holding>().isHolding = true;
                    player.GetComponent<Holding>().heldObj = obj;
                    player.GetComponent<Holding>().ogparent = obj.transform.parent;
                    player.GetComponent<Holding>().ogpos = obj.transform.position;
                    player.GetComponent<Holding>().ogrot = obj.transform.rotation;
                    objRB = obj.GetComponent<Rigidbody>();
                    objRB.useGravity = false;
                    objRB.isKinematic = true;
                    obj.transform.parent = reticle.transform;
                    obj.transform.position = Camera.main.transform.position + Camera.main.transform.forward * 1.0f + Camera.main.transform.right * .25f;
                    obj.transform.rotation = Quaternion.Euler(Camera.main.transform.rotation.eulerAngles.x, Camera.main.transform.rotation.eulerAngles.y, Camera.main.transform.rotation.eulerAngles.z);
                    if(obj.name == "Knife")
                    {
                        if(player.transform.parent.gameObject.name == "Player1" || player.transform.parent.gameObject.name == "Player2")
                        {
                            obj.transform.Rotate(0, 0, -90f, Space.Self);
                        }
                        else if(player.transform.parent.gameObject.name == "Player3" || player.transform.parent.gameObject.name == "Player4")
                        {
                            obj.transform.Rotate(0, 0, 90f, Space.Self);
                        }
                    }
                    if(obj.name == "Spatula")
                    {
                        obj.transform.Rotate(0, 0, -180f, Space.Self);
                        obj.transform.position = obj.transform.position + Camera.main.transform.up * .25f;                  
                    }
                    if(obj.name == "Pan")
                    {
                        obj.transform.Rotate(-90f, 0, 0, Space.Self);
                    }
                    if(obj.name == "CheeseSlice")
                    {
                        obj.transform.Rotate(0, -90f, 0, Space.Self);
                    }
                    if(obj.name == "Bread_Butter1" || obj.name == "Bread_Butter2")
                    {
                        if(player.transform.parent.gameObject.name == "Player1" || player.transform.parent.gameObject.name == "Player2")
                        {
                            obj.transform.Rotate(0, -90f, 90f, Space.Self);
                            obj.transform.position = obj.transform.position + Camera.main.transform.up * .125f + Camera.main.transform.right * .25f;
                        }
                        else if(player.transform.parent.gameObject.name == "Player3" || player.transform.parent.gameObject.name == "Player4")
                        {
                            obj.transform.Rotate(0, 90f, -90f, Space.Self);
                            obj.transform.position = obj.transform.position + Camera.main.transform.up * .125f + Camera.main.transform.right * -.25f;
                        }
                    }
                }
            }
        }
    }

    public void ReturnObject(GameObject heldObj)
    {
        if(heldObj.name == "Knife_Butter")
        {
            //Do nothing
        }
        else if(heldObj.name == "SpatulaSW")
        {
            //Do nothing
        }
        else
        {
            objRB = heldObj.GetComponent<Rigidbody>();
            objRB.useGravity = true;
            heldObj.transform.parent = player.GetComponent<Holding>().ogparent;
            heldObj.transform.position = player.GetComponent<Holding>().ogpos;
            heldObj.transform.rotation = player.GetComponent<Holding>().ogrot;
            player.GetComponent<Holding>().isHolding = false;
            player.GetComponent<Holding>().heldObj = null;
        }
    }
}
