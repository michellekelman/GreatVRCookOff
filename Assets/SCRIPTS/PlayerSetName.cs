using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Photon.Pun;

public class PlayerSetName : MonoBehaviourPun, IPunInstantiateMagicCallback
  {
    GameObject parent;
    public void OnPhotonInstantiate(Photon.Pun.PhotonMessageInfo info)
    {
        object[] instantiationData = info.photonView.InstantiationData;
        parent = PhotonView.Find((int)instantiationData[0]).gameObject;
        this.transform.SetParent(parent.transform);
    }
  }