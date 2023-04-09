using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ActiveGameObject : MonoBehaviour
{
    GameObject activeObject; 
    GameObject inHandObject;
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public GameObject getActiveObject() {
        return activeObject;
    }

    public void setActiveObject(GameObject obj) {
        activeObject = obj;
        //Debug.Log(activeObject);
    }

    public void setInHandObject(GameObject obj) {
        inHandObject = obj;
    }
}
