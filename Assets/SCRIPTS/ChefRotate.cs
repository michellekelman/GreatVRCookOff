using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ChefRotate : MonoBehaviour
{
    public GameObject chef;
    public GameObject camera;

    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        chef.transform.position = new Vector3(camera.transform.position.x, camera.transform.position.y, camera.transform.position.z);
        chef.transform.eulerAngles = new Vector3(camera.transform.eulerAngles.x, camera.transform.eulerAngles.y, camera.transform.eulerAngles.z);
    }
}
