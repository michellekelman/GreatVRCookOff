using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class RecipeStepsBehavior : MonoBehaviour
{
    // Start is called before the first frame update
    [HideInInspector] public bool step1Complete;
    [HideInInspector] public bool step2Complete;
    [HideInInspector] public int step3Complete;
    [HideInInspector] public bool step4Complete;
    [HideInInspector] public bool step5Complete;
    [HideInInspector] public bool step6Complete;
    [HideInInspector] public bool step7Complete;
    public bool step8Complete;

    public GameObject playerRecipeInstruction;
    bool dummy = false;
    void Start()
    {
        step1Complete = false;
        step2Complete = false;
        step3Complete = 0;
        step4Complete = false;
        step5Complete = false;
        step6Complete = false;
        step7Complete = false;
        step8Complete = false;
    }

    // Update is called once per frame
    void Update()
    {
        // ChangeUserMessage();
    }

    // void ChangeUserMessage()
    // {
    //     if (step1Complete)
    //     {
    //         if (step2Complete)
    //         {
    //             if (step3Complete)
    //             {
    //                 if (step4Complete)
    //                 {
    //                     if (step5Complete)
    //                     {
    //                         if (step6Complete)
    //                         {
    //                             if (step7Complete)
    //                             {
    //                                 if (step8Complete)
    //                                 {
    //                                      playerRecipeInstruction.GetComponent<TMP_Text>().text = "Complete!";
    //                                 }
    //                                 else 
    //                                 {
    //                                     playerRecipeInstruction.GetComponent<TMP_Text>().text = "8. Once fully cooked (golden brown with melted cheese), remove sandwich from pan and put on plate";
    //                                 }
    //                             }
    //                             else 
    //                             {
    //                                 playerRecipeInstruction.GetComponent<TMP_Text>().text = "7. Flip the sandwich";
    //                             }
    //                         }
    //                         else 
    //                         {
    //                             playerRecipeInstruction.GetComponent<TMP_Text>().text = "6. Put second slice of bread (butter up) on cheese";
    //                         }
    //                     }
    //                     else 
    //                     {
    //                         playerRecipeInstruction.GetComponent<TMP_Text>().text = "5. Stack cheese on top of bread in pan";
    //                     }
    //                 }
    //                 else 
    //                 {
    //                     playerRecipeInstruction.GetComponent<TMP_Text>().text = "4. Put once slide of bread (butter down) in the pan";
    //                 }
    //             }
    //             else 
    //             {
    //                 playerRecipeInstruction.GetComponent<TMP_Text>().text = "3. Spread butter one on side of each slice of bread";
    //             }
    //         }
    //         else 
    //         {
    //             playerRecipeInstruction.GetComponent<TMP_Text>().text = "2. Heat pan on Medium";
    //         }
    //     }
    //     else 
    //     {
    //         playerRecipeInstruction.GetComponent<TMP_Text>().text = "1. Collect ingredients from pantry";
    //     }
    // }

    public void setStep1True()
    {
        step1Complete = true;
        playerRecipeInstruction.GetComponent<TMP_Text>().text = "2. Heat pan on Medium";
    }

    public void setStep2True()
    {
        step2Complete = true;

        playerRecipeInstruction.GetComponent<TMP_Text>().text = "3. Spread butter one on side of each slice of bread";
    }

    public void incrementStep3()
    {
        step3Complete++;
        if (step3Complete == 2)
        {
            playerRecipeInstruction.GetComponent<TMP_Text>().text = "4. Put once slide of bread (butter down) in the pan";
        }
    }

    public void setStep4True()
    {
        step4Complete = true;
        playerRecipeInstruction.GetComponent<TMP_Text>().text = "5. Stack cheese on top of bread in pan";
    }

    public void setStep5True()
    {
        step5Complete = true;
        playerRecipeInstruction.GetComponent<TMP_Text>().text = "6. Put second slice of bread (butter up) on cheese";
    }

    public void setStep6True()
    {
        step6Complete = true;
        playerRecipeInstruction.GetComponent<TMP_Text>().text = "7. Flip the sandwich";
    }

    public void setStep7True()
    {
        step7Complete = true;
        playerRecipeInstruction.GetComponent<TMP_Text>().text = "8. Once fully cooked (golden brown with melted cheese), remove sandwich from pan and put on plate";
    }

    public void setStep8True()
    {
        step8Complete = true;
    }
}
