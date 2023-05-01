using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Photon.Pun;

public class GlobalVariables : MonoBehaviourPunCallbacks
{
    // Start is called before the first frame update
    public int playerFinishedCount;
    void Start()
    {
        playerFinishedCount = 0;
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    
    public void addFinishedPlayer()
    {
        playerFinishedCount++;
        photonView.RPC("addFinishedPlayerRPC", RpcTarget.All, playerFinishedCount);
    }

    [PunRPC]
    void addFinishedPlayerRPC(int players) {
        playerFinishedCount = players;
    }
    
}
