using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;

public class Highlight : MonoBehaviour, IPointerEnterHandler, IPointerExitHandler
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

    public void OnPointerEnter(PointerEventData eventData) 
    {
        var outline = objectName.GetComponent<Outline>();
        outline.enabled = true;
        outline.OutlineWidth = 10f;
        GameObject.Find("Character").GetComponent<ActiveGameObject>().setActiveObject(objectName);
    }

    public void OnPointerExit(PointerEventData eventData) 
    {
        var outline = objectName.GetComponent<Outline>();
        outline.enabled = false;
        GameObject.Find("Character").GetComponent<ActiveGameObject>().setActiveObject(null);
    }
}
