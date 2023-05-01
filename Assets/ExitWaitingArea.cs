using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;
using Photon.Pun;
public class ExitWaitingArea : MonoBehaviourPunCallbacks, IPointerEnterHandler, IPointerExitHandler
{
    // Start is called before the first frame update
    public bool reticlein;
    public GameObject roomManager;
    private string B;
    private string[] bMap;
    void Start()
    {
        // bMap = player.GetComponent<ButtonMapping>().getMap();
        B = "js11";
    }

    // Update is called once per frame
    void Update()
    {
        if (reticlein && Input.GetButtonDown(B))
        {
            roomManager.GetComponent<RoomManager>().StartGame();
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
