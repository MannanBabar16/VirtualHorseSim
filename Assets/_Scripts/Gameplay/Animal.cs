using System.Collections;
using System.Collections.Generic;
using Unity.VisualScripting;
using UnityEngine;
using UnityEngine.UI;

public class Animal : MonoBehaviour
{
    GameObject currentAnimal;
    GameObject horse;
    [SerializeField] float attackDelayTime = 2f;
    [SerializeField] Image healthBar;
    int animalHealth = 100;
    private void Start()
    {
        currentAnimal = transform.GetChild(0).gameObject;
    }

    private void OnTriggerEnter(Collider other)
    {
        if(other.tag == "Animal")
        {
            Debug.Log("enter in collider");
            horse = other.gameObject;
            gameObject.transform.GetChild(1).gameObject.SetActive(true);
            InvokeRepeating("Attack", 0f, attackDelayTime);
            UIManager.Instance.attackButton.onClick.AddListener(AttackButton);
        }
    }
    private void OnTriggerExit(Collider other)
    {
        if (other.tag == "Animal")
        {
            horse = null;
            gameObject.transform.GetChild(1).gameObject.SetActive(false);
            UIManager.Instance.attackButton.onClick.RemoveListener(AttackButton);
            CancelInvoke("Attack");
        }
    }
  

    void Attack()
    {
        currentAnimal.GetComponent<Animator>().SetTrigger("Attack");
        GameManager.Instance.HealthCheck(5);
    }

    void AttackButton()
    {
        if (horse)
        {           
            animalHealth = animalHealth - 25;
            healthBar.fillAmount -= 0.25f;
            Debug.Log("health bar = " + healthBar.fillAmount);
            if (animalHealth == 0)
            {
                CancelInvoke("Attack");
                currentAnimal.GetComponent<Animator>().SetBool("Die", true);
                if((GData.Instance.Current_Mode == 1 && GameManager.Instance.demoLevel == 0 || GameManager.Instance.demoLevel == 5) || (GData.Instance.Current_Mode == 2 && GameManager.Instance.demoLevel == 2 || GameManager.Instance.demoLevel == 7))
                {
                    GameManager.Instance.GameComplete(2);
                }              
                else
                {
                    GameManager.Instance.currentLevel.interactableObjects[1].SetActive(true);
                    Invoke("SetActiveFalseAnimal", 2f);
                }

            }
        }    
        
    }

    void SetActiveFalseAnimal()
    {
        gameObject.SetActive(false);
    }
}
