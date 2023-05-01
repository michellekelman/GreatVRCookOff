using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Photon.Pun;
public class SynchronizeDoorOpen : MonoBehaviourPunCallbacks
{
    // Start is called before the first frame update
    private bool open = false;
    public AudioClip clip;
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    [PunRPC]
    void DoorOpenRPC()
    {
        if(open==false) {
            this.transform.eulerAngles = new Vector3(0.0f, 60.0f, 0.0f);
            open = true;
            AudioSource.PlayClipAtPoint(clip, this.transform.position, 0.5f);
        }
    }

    [PunRPC]
    void DoorClosRPC()
    {
        if(open==true) {
            this.transform.eulerAngles = new Vector3(0.0f, 180.0f, 0.0f);
            open = false;
            AudioSource.PlayClipAtPoint(clip, this.transform.position, 0.5f);
        }
    }
}
