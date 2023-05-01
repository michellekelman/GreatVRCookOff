using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;
using Photon.Pun;

public class UpdateKitchenCanvas : MonoBehaviourPunCallbacks
{
    // Start is called before the first frame update
    public GameObject playerRecipeInstruction;
    [HideInInspector] public bool step1Complete;
    [HideInInspector] public int step2Complete;
    [HideInInspector] public int step3Complete;
    [HideInInspector] public bool step4Complete;
    [HideInInspector] public bool step5Complete;
    [HideInInspector] public bool step6Complete;
    [HideInInspector] public bool step7Complete;
    [HideInInspector] public bool step8Complete;
    void Start()
    {
        
    }

    void CheckValidStep()
    {
        if (step1Complete)
        {
            if (step2Complete == 2)
            {
                if (step3Complete == 2)
                {
                    if (step4Complete)
                    {
                        if (step5Complete)
                        {
                            if (step6Complete)
                            {
                                if (step7Complete)
                                {
                                    if (step8Complete)
                                    {
                                         playerRecipeInstruction.GetComponent<TMP_Text>().text = "Complete!";
                                    }
                                    else 
                                    {
                                        playerRecipeInstruction.GetComponent<TMP_Text>().text = "8. Once fully cooked (golden brown with melted cheese), remove sandwich from pan and put on plate";
                                    }
                                }
                                else 
                                {
                                    playerRecipeInstruction.GetComponent<TMP_Text>().text = "7. Flip the sandwich";
                                }
                            }
                            else 
                            {
                                playerRecipeInstruction.GetComponent<TMP_Text>().text = "6. Put second slice of bread (butter up) on cheese";
                            }
                        }
                        else 
                        {
                            playerRecipeInstruction.GetComponent<TMP_Text>().text = "5. Stack cheese on top of bread in pan";
                        }
                    }
                    else 
                    {
                        playerRecipeInstruction.GetComponent<TMP_Text>().text = "4. Put once slide of bread (butter down) in the pan";
                    }
                }
                else 
                {
                    playerRecipeInstruction.GetComponent<TMP_Text>().text = "3. Spread butter one on side of each slice of bread";
                }
            }
            else 
            {
                playerRecipeInstruction.GetComponent<TMP_Text>().text = "2. Heat pan on Medium";
            }
        }
        else 
        {
            playerRecipeInstruction.GetComponent<TMP_Text>().text = "1. Collect ingredients from pantry (Bread, Cheese, Butter) and place on the kitchen table";
        }
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    [PunRPC]
    void setStep1TrueRPC()
    {
        step1Complete = true;
        CheckValidStep();
    }

    [PunRPC]
    void setStep2TrueRPC()
    {
        step2Complete++;
        CheckValidStep();
    }

    [PunRPC]
    void incrementStep3RPC()
    {
        step3Complete++;
        CheckValidStep();
    }

    [PunRPC]
    void setStep4TrueRPC()
    {
        step4Complete = true;
        CheckValidStep();
    }

    [PunRPC]
    void setStep5TrueRPC()
    {
        step5Complete = true;
        CheckValidStep();
    }

    [PunRPC]
    void setStep6TrueRPC()
    {
        step6Complete = true;
        CheckValidStep();
    }

    [PunRPC]
    void setStep7TrueRPC()
    {
        step7Complete = true;
        CheckValidStep();
    }

    [PunRPC]
    void setStep8TrueRPC()
    {
        step8Complete = true;
    }
}
