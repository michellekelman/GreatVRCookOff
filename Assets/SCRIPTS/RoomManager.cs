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

    private Color[] colors = new Color[]{new Color(1f, 0.39215686f, 0.39215686f, 1.0f), new Color(1.0f, 1.0f, 0.5f, 1.0f), new Color(0.3921569f, 0.5882353f, 1f, 1f), new Color(0.5882353f, 1f, 0.5882353f, 1f)};
    // private Vector3[] spawns = new Vector3[]{new Vector3(2,1,1), new Vector3(2,1,-5), new Vector3(-1,1,-5), new Vector3(-1,1,1)};
    private Vector3[] spawns = new Vector3[]{new Vector3(2,1,21), new Vector3(2,1,15), new Vector3(-1,1,15), new Vector3(-1,1,21)};
    private Quaternion[] rotations = new Quaternion[]{new Quaternion(0,180,0,1), new Quaternion(0,45,0,1), new Quaternion(0,-45,0,1), new Quaternion(0,-45,0,1)};
    void Start()
    {
        GameObject _player = PhotonNetwork.Instantiate(player.name, spawns[PhotonNetwork.CurrentRoom.PlayerCount - 1], rotations[PhotonNetwork.CurrentRoom.PlayerCount - 1]);
        _player.GetComponent<PlayerSetup>().IsLocalPlayer();
        _player.transform.Find("PlayerMenu").Find("PlayerMenuHolder").Find("Player").Find("PlayerText").gameObject.GetComponent<TMP_Text>().text = $"Player {PhotonNetwork.CurrentRoom.PlayerCount}";
        _player.transform.Find("PlayerMenu").Find("PlayerMenuHolder").Find("Player").gameObject.GetComponent<Image>().color = colors[PhotonNetwork.CurrentRoom.PlayerCount - 1];
    }


    void Update()
    {
        
    }

    public void StartGame()
    {
        Debug.Log("69");
        // gameController.GetComponent<TimerControl>().offsetSet = true;
    }

    
}
