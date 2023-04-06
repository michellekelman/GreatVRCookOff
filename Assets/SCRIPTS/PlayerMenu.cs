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
    string[] instructionSet;
    int currInstruction;

    // Start is called before the first frame update
    void Start()
    {
        seconds = (int)Time.time;
        instructionSet = new string[] { 
            "1. Collect Ingredients from pantry",
            "2. Heat Pan on Medium",
            "3. Spread butter on each slide of bread",
            "4. Put one slice of bread (butter down) in the pan",
            "5. Stack cheese on top of bread in pan",
            "6. Put second slide of bread (butter up) on cheese",
            "7. Fip the sandwich",
            "8. Once fully cooked (golden brown with melted cheese), remove sandwhich and put on plate",
        };
        currInstruction = 0;
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

    void updateInstruction() {
        currInstruction += 1;

        // TODO : Last instruction and End game scenario 
        instruction.GetComponent<TMP_Text>().text = instructionSet[currInstruction];
    }
}
