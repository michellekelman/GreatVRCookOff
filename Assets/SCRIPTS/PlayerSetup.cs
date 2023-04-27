using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Photon.Pun;

public class PlayerSetup : MonoBehaviourPunCallbacks
{
    // Start is called before the first frame update
    public CharacterMovement movement;
    public GameObject xr;
    public GameObject menuController;
    public GameObject playerMenu;
    private Vector3[] kitchenSpawns = new Vector3[]{new Vector3(0,1,0), new Vector3(-2,1,-6), new Vector3(-6,1,-6), new Vector3(-6,1,1)};
    public int playerNumber;

    public void IsLocalPlayer(int num)
    {
        movement.enabled = true;
        xr.SetActive(true);
        menuController.SetActive(true);
        playerMenu.SetActive(true);
        playerNumber = num;
    }

    [PunRPC]
    void teleportToKitchen()
    {
        this.transform.position = kitchenSpawns[playerNumber - 1];
    }

}
