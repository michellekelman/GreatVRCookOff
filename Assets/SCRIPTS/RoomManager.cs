using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Photon.Pun;
using TMPro;
using UnityEngine.UI;


public class RoomManager : MonoBehaviourPunCallbacks
{
    // Start is called before the first frame update
    public GameObject player;
    public GameObject playerMenu;
    public GameObject menuController;
    public GameObject settingsMenuView;
    public GameObject keyboardMenu;
    public GameObject roomMenu;
    public GameObject instructionsView;
    public GameObject recipeView;
    public GameObject tempMenu;
    public GameObject endMenu;
    public GameObject gameController;
    
    public int playerCount;

    public GameObject player1;
    public GameObject player2;
    public GameObject player3;
    public GameObject player4;

    private Color[] colors = new Color[]{new Color(1f, 0.39215686f, 0.39215686f, 1.0f), new Color(1.0f, 1.0f, 0.5f, 1.0f), new Color(0.3921569f, 0.5882353f, 1f, 1f), new Color(0.5882353f, 1f, 0.5882353f, 1f)};
    private Vector3[] spawns = new Vector3[]{new Vector3(1,1,20), new Vector3(-1,1,20), new Vector3(3,1,20), new Vector3(-3,1,20)};
    private Vector3[] kitchenSpawns = new Vector3[]{new Vector3(-2,1,1), new Vector3(-2,1,-6), new Vector3(-6,1,-6), new Vector3(-6,1,1)};
    private Quaternion[] rotations = new Quaternion[]{new Quaternion(0,180,0,1), new Quaternion(0,180,0,1), new Quaternion(0,180,0,1), new Quaternion(0,180,0,1)};
    private int[] parentIDs = new int[]{11,12,13,14};
    void Start()
    {
        GameObject _player = PhotonNetwork.Instantiate(player.name, spawns[PhotonNetwork.CurrentRoom.PlayerCount - 1], rotations[PhotonNetwork.CurrentRoom.PlayerCount - 1],0, new object[]{parentIDs[PhotonNetwork.CurrentRoom.PlayerCount - 1]});
        _player.GetComponent<PlayerSetup>().IsLocalPlayer(PhotonNetwork.CurrentRoom.PlayerCount);
        _player.transform.Find("PlayerMenu").Find("PlayerMenuHolder").Find("Player").Find("PlayerText").gameObject.GetComponent<TMP_Text>().text = $"Player {PhotonNetwork.CurrentRoom.PlayerCount}";
        _player.transform.Find("PlayerMenu").Find("PlayerMenuHolder").Find("Player").gameObject.GetComponent<Image>().color = colors[PhotonNetwork.CurrentRoom.PlayerCount - 1];
        playerCount = PhotonNetwork.CurrentRoom.PlayerCount; //doesnt work as intended
    }

    void Update()
    {

    }

    

    [PunRPC]
    public void StartGame()
    {
        PhotonNetwork.CurrentRoom.IsOpen = false;
        if(player1.transform.childCount > 0)
        {
            player1.transform.Find("Character(Clone)").gameObject.GetComponent<PhotonView>().RPC("teleportToKitchen", RpcTarget.All);
        }
        if(player2.transform.childCount > 0)
        {
            player2.transform.Find("Character(Clone)").gameObject.GetComponent<PhotonView>().RPC("teleportToKitchen", RpcTarget.All);
        }
        if(player3.transform.childCount > 0)
        {
            player3.transform.Find("Character(Clone)").gameObject.GetComponent<PhotonView>().RPC("teleportToKitchen", RpcTarget.All);
        }
        if(player4.transform.childCount > 0)
        {
            player4.transform.Find("Character(Clone)").gameObject.GetComponent<PhotonView>().RPC("teleportToKitchen", RpcTarget.All);
        }
        gameController.GetComponent<TimerControl>().StartTimer();
    }

    
}


