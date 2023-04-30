using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Photon.Pun;

public class GlobalVariables : MonoBehaviourPunCallbacks
{
    // Start is called before the first frame update
    public int playerCount;
    void Start()
    {
        if (PhotonNetwork.IsMasterClient)
        {
            // Set the initial score value for the master client
            playerCount = 0;
        }
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    [PunRPC]
    public void addPlayer(int players)
    {
        playerCount = players;
        photonView.RPC("addPlayerRPC", RpcTarget.Others, players);
    }

    void addPlayerRPC(int players) {
        if (!PhotonNetwork.IsMasterClient)
        {
            playerCount = players;
        }
    }
}
