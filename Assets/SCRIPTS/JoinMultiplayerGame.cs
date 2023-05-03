using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Photon.Pun;
using Photon.Realtime;
using UnityEngine.UI;
using TMPro;

public class JoinMultiplayerGame : MonoBehaviourPunCallbacks
{
    // Start is called before the first frame update
    public TMP_Text createInput;
    public TMP_Text error;
    // public TMP_Text joinInput;
    private Dictionary<string, RoomInfo> cachedRoomList = new Dictionary<string, RoomInfo>();
    void Start()
    {
        PhotonNetwork.AutomaticallySyncScene = false;
        
    }

    // Update is called once per frame
    void Update()
    {
        foreach (var entry in cachedRoomList)
        {
            Debug.Log(entry.Key);
            Debug.Log(entry.Value);
        }
    }

    private void UpdateCachedRoomList(List<RoomInfo> roomList)
    {
        for(int i=0; i<roomList.Count; i++)
        {
            RoomInfo info = roomList[i];
            if (info.RemovedFromList)
            {
                cachedRoomList.Remove(info.Name);
            }
            else
            {
                cachedRoomList[info.Name] = info;
            }
        }
    }

    public override void OnRoomListUpdate(List<RoomInfo> roomList)
    {
        base.OnRoomListUpdate(roomList);
        UpdateCachedRoomList(roomList);
    }

    public void CreateRoom()
    {
        if (!cachedRoomList.ContainsKey(createInput.text))
        {
            error.text = "";
            RoomOptions roomOptions = new RoomOptions();
            roomOptions.IsVisible = true;
            roomOptions.MaxPlayers = 4;
            PhotonNetwork.CreateRoom(createInput.text, roomOptions, TypedLobby.Default);
        }
        else 
        {
            error.text = "Room already exists!";
        }
    }


    public void JoinRoom()
    {
        if (!cachedRoomList.ContainsKey(createInput.text))
        {
            error.text = "Room doesn't exist!";
        }
        else 
        {
            if (cachedRoomList[createInput.text].IsOpen && cachedRoomList[createInput.text].PlayerCount < 4)
            {
                error.text = "";
                PhotonNetwork.JoinRoom(createInput.text);
            }
            else 
            {
                error.text = "Room unavailable!";
            }
        }
        
    }

    public void CreateOrJoinRoom()
    {
        RoomOptions roomOptions = new RoomOptions();
        roomOptions.IsVisible = true;
        roomOptions.MaxPlayers = 4;
        PhotonNetwork.JoinOrCreateRoom(createInput.text, roomOptions, TypedLobby.Default);
    }

    public override void OnJoinedRoom()
    {
        PhotonNetwork.LoadLevel("KitchenScene");
    }
}
