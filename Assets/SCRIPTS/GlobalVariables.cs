using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GlobalVariables : MonoBehaviour
{
    // Start is called before the first frame update
    public int playerCount;
    void Start()
    {
        playerCount = 0;
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public void addPlayer()
    {
        playerCount++;
    }
}
