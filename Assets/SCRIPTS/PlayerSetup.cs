using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerSetup : MonoBehaviour
{
    // Start is called before the first frame update
    public CharacterMovement movement;
    public GameObject xr;
    public GameObject menuController;
    public GameObject playerMenu;

    public void IsLocalPlayer()
    {
        movement.enabled = true;
        xr.SetActive(true);
        menuController.SetActive(true);
        playerMenu.SetActive(true);
    }

}
