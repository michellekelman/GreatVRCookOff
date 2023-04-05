using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using System.Linq; 

public class InventoryMenu : MonoBehaviour
{   
    public GameObject inventMenu;
    private Dictionary<string, GameObject> inventory = new Dictionary<string, GameObject>();
    private int inventoryCount = 0;
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public void showInvent() {
        inventMenu.SetActive(true);
    }

    public void hideInvent() {
        inventMenu.SetActive(false);
    }

    public void plusInventory() {
        inventoryCount += 1;
    }

    public void minusInventory() {
        inventoryCount -= 1;
    }

    public int getCount() {
        return inventoryCount;
    }

    public void removeObj(string objName) {
        inventory.Remove(objName);
        minusInventory();
    }

    public void addObj(string objName, GameObject obj){
        inventory.Add(objName, obj);
        plusInventory();
    }

    public GameObject getObj(string objName) {
        return inventory[objName];
    }

    public Dictionary<string, GameObject> getInventory() {
        var keys = inventory.Keys;
        foreach(var key in keys){
            Debug.Log(keys);
        }
        return inventory;
    }

    public void loadInventory() {
        Button[] btn = {
            GameObject.Find("BreadTag").GetComponent<Button>(),
            GameObject.Find("CheeseTag").GetComponent<Button>(),
            GameObject.Find("ButterTag").GetComponent<Button>(),
        };

        var keys = inventory.Keys;

        for(int j=0; j<3; j++){
            Sprite empty = Resources.Load<Sprite>("null");
            btn[j].image.sprite = empty;
        }

        for(int j=0; j<3; j++){
            Sprite mySprite = Resources.Load<Sprite>(keys.ElementAt(j));
            Sprite empty = Resources.Load<Sprite>("null");
            btn[j].image.sprite = (mySprite!=null)? mySprite: empty;
        }
    }
}
