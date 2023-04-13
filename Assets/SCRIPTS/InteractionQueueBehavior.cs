using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class InteractionQueueBehavior : MonoBehaviour
{
    // Start is called before the first frame update
    public GameObject queue;
    public bool interactionPending;
    void Start()
    {
        queue.GetComponent<TMP_Text>().text = "";
        interactionPending = false;
    }

    // Update is called once per frame
    void Update()
    {

    }

    public void SetQueueMessage(string msg)
    {
        queue.GetComponent<TMP_Text>().text = msg;
    }

    public void SetInteractionPending(bool val)
    {
        interactionPending = val;
    }

    public string getCurrentQueue()
    {
        return queue.GetComponent<TMP_Text>().text;
    }
}
