using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;

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
    private bool reticlein;
    private string B;
    // Start is called before the first frame update
    void Start()
    {
        B = "js10";
    }

    // Update is called once per frame
    void Update()
    {
        //Add checks if stove is heated to medium and time delays for cooking steps 

        //if half sandwich in pan add last bread
        if(reticlein && (player.GetComponent<Holding>().heldObj.name == "Bread_Butter1" || player.GetComponent<Holding>().heldObj.name == "Bread_Butter2") && halfSw.activeSelf)
        {
            if(Input.GetButtonDown(B))
            {
                player.GetComponent<Holding>().heldObj.SetActive(false);
                player.GetComponent<Holding>().isHolding = false;
                player.GetComponent<Holding>().heldObj = new GameObject();
                halfSw.SetActive(false);
                rawSw.SetActive(true);
                rawSw.transform.parent = GetComponent<Transform>();
                rawSw.transform.position = GetComponent<Transform>().position + GetComponent<Transform>().up * -.05f + GetComponent<Transform>().right * .0625f + GetComponent<Transform>().forward * .35f;
            }
        }

        //if player adds Bread_Butter1 first
        if(reticlein && player.GetComponent<Holding>().heldObj.name == "Bread_Butter1" && !breadSlice2.activeSelf)
        {
            if(Input.GetButtonDown(B))
            {
                player.GetComponent<Holding>().heldObj.SetActive(false);
                player.GetComponent<Holding>().isHolding = false;
                player.GetComponent<Holding>().heldObj = new GameObject();
                breadSlice1.SetActive(true);
                breadSlice1.transform.parent = GetComponent<Transform>();
                breadSlice1.transform.position = GetComponent<Transform>().position + GetComponent<Transform>().up * .125f + GetComponent<Transform>().right * .05f;
            }
        }
        
        //if player adds Bread_Butter2 first
        if(reticlein && player.GetComponent<Holding>().heldObj.name == "Bread_Butter2" && !breadSlice1.activeSelf)
        {
            if(Input.GetButtonDown(B))
            {
                player.GetComponent<Holding>().heldObj.SetActive(false);
                player.GetComponent<Holding>().isHolding = false;
                player.GetComponent<Holding>().heldObj = new GameObject();
                breadSlice2.SetActive(true);
                breadSlice2.transform.parent = GetComponent<Transform>();
                breadSlice2.transform.position = GetComponent<Transform>().position + GetComponent<Transform>().up * .125f + GetComponent<Transform>().right * .05f;
            }
        }

        //if bread in pan add cheese
        if(reticlein && player.GetComponent<Holding>().heldObj.name == "CheeseSlice" && (breadSlice1.activeSelf || breadSlice2.activeSelf))
        {
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
            }
        }

        //if holding spatula and sandwich ready to flip
        if(reticlein && player.GetComponent<Holding>().heldObj.name == "Spatula" && rawSw.activeSelf)
        {
            if(Input.GetButtonDown(B))
            {
                rawSw.SetActive(false);
                cookedSw.SetActive(true);
                cookedSw.transform.parent = GetComponent<Transform>();
                cookedSw.transform.position = GetComponent<Transform>().position + GetComponent<Transform>().up * -.05f + GetComponent<Transform>().right * .0625f + GetComponent<Transform>().forward * .35f;
            }
        }

        //if holding spatula and sandwich done cooking
        if(reticlein && player.GetComponent<Holding>().heldObj.name == "Spatula" && cookedSw.activeSelf) //Add check to see if the sandwich has been flipped and cooked first
        {
            if(Input.GetButtonDown(B))
            {
                cookedSw.SetActive(false);
                player.GetComponent<Holding>().heldObj.SetActive(false);
                spatulaSw.SetActive(true);
                player.GetComponent<Holding>().heldObj = spatulaSw;
                spatulaSw.transform.parent = reticle.transform;
                spatulaSw.transform.position = Camera.main.transform.position + Camera.main.transform.forward * 1.0f + Camera.main.transform.right * .25f;
                spatulaSw.transform.rotation = Quaternion.Euler(Camera.main.transform.rotation.eulerAngles.x, Camera.main.transform.rotation.eulerAngles.y, Camera.main.transform.rotation.eulerAngles.z);
                spatulaSw.transform.Rotate(0, -45f, 45f, Space.Self);
                spatulaSw.transform.position = spatulaSw.transform.position + Camera.main.transform.right * .25f;
            }
        }                    
    }

    public void OnPointerEnter(PointerEventData eventData) 
    {
        reticlein = true;
    }

    public void OnPointerExit(PointerEventData eventData) 
    {
        reticlein = false;
    }    
}
