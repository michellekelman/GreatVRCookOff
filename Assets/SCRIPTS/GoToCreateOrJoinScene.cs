using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Photon.Pun;
using UnityEngine.SceneManagement;

public class GoToCreateOrJoinScene : MonoBehaviourPunCallbacks
{
    // Start is called before the first frame update
    void Start()
    {
        PhotonNetwork.ConnectUsingSettings();
    }

    // Update is called once per frame
    void Update()
    {
        
    }


    public void joinLobby(string createOrJoin)
    {
        CreateOrJoinInfo.createOrJoin = createOrJoin;
        PhotonNetwork.JoinLobby();
    }

    public override void OnJoinedLobby()
    {
        if (CreateOrJoinInfo.createOrJoin == "single")
        {
            PhotonNetwork.CreateRoom(null);
        }
        else 
        {
            SceneManager.LoadScene("CreateOrJoinScene");
        }
    }

    public override void OnJoinedRoom()
    {
        PhotonNetwork.LoadLevel("KitchenScene");
    }

}
