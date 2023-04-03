using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro; 
using UnityEngine.UI;

public class PlayerMenu : MonoBehaviour
{
    public GameObject menu; 
    public GameObject player_num; 
    public GameObject timer; 
    public GameObject instruction; 
    int seconds; 

    // Start is called before the first frame update
    void Start()
    {
        seconds = (int)Time.time;
    }

    // Update is called once per frame
    void Update()
    {
        seconds = (int)Time.time;
        timer.GetComponent<TMP_Text>().text = getTime(seconds);

    }

    string getTime(int seconds) {
        int minutes = (int)seconds / 60;
        int remainingSeconds = (int)seconds % 60;
        return string.Format("{0}:{1:00}", minutes, remainingSeconds);
    }
}
