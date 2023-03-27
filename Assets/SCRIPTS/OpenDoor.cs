using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;

public class OpenDoor : MonoBehaviour, IPointerEnterHandler, IPointerExitHandler
{
    public GameObject objectName;
    bool hover;
    bool open;
    // Start is called before the first frame update
    void Start()
    {
        hover = false;
        open = false;
    }

    // Update is called once per frame
    void Update()
    {
        if(Input.GetButtonDown("js0") && hover==true && open==false) {
            objectName.transform.eulerAngles = new Vector3(0.0f, 60.0f, 0.0f);
            open = true;
        }
        else if(Input.GetButtonDown("js0") && hover==true && open==true) {
            objectName.transform.eulerAngles = new Vector3(0.0f, 180.0f, 0.0f);
            open = false;
        }
    }

    public void OnPointerEnter(PointerEventData eventData) 
    {
        hover = true;
    }

    public void OnPointerExit(PointerEventData eventData) 
    {
        hover = false;
    }
}
