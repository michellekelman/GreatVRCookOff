using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Highlight : MonoBehaviour
{
    public GameObject objectName;
    // Start is called before the first frame update
    void Start()
    {
        var outline = objectName.GetComponent<Outline>();
        outline.enabled = false;
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public void PointerEnter() 
    {
        var outline = objectName.GetComponent<Outline>();
        outline.enabled = true;
        outline.OutlineWidth = 10f;
    }

    public void PointerExit() 
    {
        var outline = objectName.GetComponent<Outline>();
        outline.enabled = false;
    }
}
