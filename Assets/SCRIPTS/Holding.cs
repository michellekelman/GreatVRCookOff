using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Holding : MonoBehaviour
{
    public bool isHolding;
    public GameObject heldObj;
    public Transform ogparent;
    public Vector3 ogpos;
    public Quaternion ogrot;

    // Start is called before the first frame update
    void Start()
    {
        isHolding = false;
        heldObj = null;
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
