using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ButtonMapping : MonoBehaviour
{
    public string A;
    public string B;
    public string X;
    public string Y;
    public string menu;
    public string OK;
    public string[] bMap;

    // Start is called before the first frame update
    void Start()
    {
        bMap = new string[] {A, B, X, Y, menu};
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public string[] getMap() {
        bMap = new string[] {A, B, X, Y, menu};
        return bMap;
    }
}
