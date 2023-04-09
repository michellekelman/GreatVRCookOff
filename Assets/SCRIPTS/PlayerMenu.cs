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
    public GameObject character;
    int seconds; 
    int startSecond;
    public int timeOffset; 
    string[] instructionSet;
    int currInstruction;
    public bool offsetSet;

    public GameObject menuController;

    // Start is called before the first frame update
    void Start()
    {
        startSecond = 0;
        timeOffset = (int)Time.timeSinceLevelLoad;
        seconds = (int)Time.timeSinceLevelLoad;
        instructionSet = new string[] { 
            "1. Collect ingredients from pantry (Bread, Cheese, and Butter)",
            "2. Heat Pan on Medium",
            "3. Spread butter on each slide of bread",
            "4. Put one slice of bread (butter down) in the pan",
            "5. Stack cheese on top of bread in pan",
            "6. Put second slide of bread (butter up) on cheese",
            "7. Fip the sandwich",
            "8. Once fully cooked (golden brown with melted cheese), remove sandwhich and put on plate",
        };
        currInstruction = 0;
        offsetSet = false;
    }

    // Update is called once per frame
    void Update()
    {
        if (!character.GetComponent<RecipeStepsBehavior>().step8Complete)
        {
            seconds = (int)Time.timeSinceLevelLoad;
            startSecond = seconds - timeOffset;
            timer.GetComponent<TMP_Text>().text = getTime(startSecond);
        }
    }

    string getTime(int seconds) {
        int minutes = (int)seconds / 60;
        int remainingSeconds = (int)seconds % 60;
        return string.Format("Time: {0}:{1:00}", minutes, remainingSeconds);
    }

    void updateInstruction() {
        currInstruction += 1;
        // TODO : Last instruction and End game scenario 
        instruction.GetComponent<TMP_Text>().text = instructionSet[currInstruction];
    }
}
