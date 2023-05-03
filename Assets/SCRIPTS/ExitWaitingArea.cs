using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;
using Photon.Pun;
public class ExitWaitingArea : MonoBehaviourPunCallbacks
{
    // Start is called before the first frame update
    public GameObject roomManager;
    public GameObject player;
    private string B;
    private string[] bMap;
    void Start()
    {
        bMap = player.GetComponent<ButtonMapping>().getMap();
        B = bMap[1];
        roomManager = GameObject.Find("RoomManager");
    }

    // Update is called once per frame
    void Update()
    {
        GameObject activeObj = player.GetComponent<ActiveGameObject>().getActiveObject();
        if (activeObj != null && activeObj.name == "StartGameButton" && Input.GetButtonDown(B))
        {
            roomManager.GetComponent<RoomManager>().StartGame();
        }
    }
}
