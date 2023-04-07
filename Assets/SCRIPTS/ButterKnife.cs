using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;

public class ButterKnife : MonoBehaviour, IPointerEnterHandler, IPointerExitHandler
{
    public GameObject player;
    public GameObject butteredKnife;
    public GameObject reticle;
    public GameObject butteredBread1;
    public GameObject butteredBread2;
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
        if(reticlein && player.GetComponent<Holding>().heldObj.name == "Knife" && (!butteredBread1.activeSelf || !butteredBread2.activeSelf))
        {
            if(Input.GetButtonDown(B))
            {
                player.GetComponent<Holding>().heldObj.SetActive(false);
                player.GetComponent<Holding>().heldObj = butteredKnife;
                player.GetComponent<Holding>().heldObj.SetActive(true);
                butteredKnife.transform.parent = reticle.transform;
                butteredKnife.transform.position = Camera.main.transform.position + Camera.main.transform.forward * .75f + Camera.main.transform.right * .25f;
                butteredKnife.transform.rotation = Quaternion.Euler(Camera.main.transform.rotation.eulerAngles.x, Camera.main.transform.rotation.eulerAngles.y, Camera.main.transform.rotation.eulerAngles.z);
                butteredKnife.transform.Rotate(0, 0, 90f, Space.Self);
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
