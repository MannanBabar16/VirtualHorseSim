using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Player : MonoBehaviour
{
    int checkpointCounter = 0;


    private void OnTriggerEnter(Collider other)
    {
        if(other.tag == "FemaleHorse")
        {
            other.gameObject.SetActive(false);
            GameManager.Instance.Horse.gameObject.SetActive(false);
            GameManager.Instance.currentLevel.interactableObjects[2].SetActive(true);
        }
        if(other.tag == "Stage")
        {
            other.gameObject.SetActive(false);
            GameManager.Instance.Horse.gameObject.SetActive(false);
            GameManager.Instance.currentLevel.interactableObjects[2].SetActive(true);
        }
        if(other.tag == "Water")
        {

            if((GData.Instance.Current_Mode == 1 && 
                GameManager.Instance.demoLevel == 3
            || GameManager.Instance.demoLevel == 4
            || GameManager.Instance.demoLevel == 8
            || GameManager.Instance.demoLevel == 9) 
            || ((GData.Instance.Current_Mode == 2) && 
            GameManager.Instance.demoLevel == 3
            || GameManager.Instance.demoLevel == 1
            || GameManager.Instance.demoLevel == 8
            || GameManager.Instance.demoLevel == 6))
            {
                GameManager.Instance.Horse.gameObject.SetActive(false);
                GameManager.Instance.currentLevel.interactableObjects[2].SetActive(true);
                GameManager.Instance.currentLevel.interactableObjects[1].SetActive(false);
            }

            
        }
        if (other.tag == "Checkpoint")
        {
            if((GData.Instance.Current_Mode == 2 && GameManager.Instance.demoLevel == 2 || GameManager.Instance.demoLevel == 7) || (GData.Instance.Current_Mode == 1 && GameManager.Instance.demoLevel == 0 || GameManager.Instance.demoLevel == 5))
            {
                Debug.Log("Collied with checkpoint");
                other.tag = "Untagged";
                other.gameObject.GetComponent<Target>().enabled = false;
                Camera.main.transform.GetChild(0).GetComponent<ParticleSystem>().Play();
                checkpointCounter++;

                other.gameObject.transform.GetChild(0).gameObject.SetActive(false);
                if (checkpointCounter < GameManager.Instance.currentLevel.Checkpoint.transform.childCount)
                {
                    GameManager.Instance.currentLevel.Checkpoint.transform.GetChild(checkpointCounter).gameObject.SetActive(true);
                    GameManager.Instance.currentLevel.Checkpoint.transform.GetChild(checkpointCounter).transform.GetComponent<Target>().enabled = true;
                }

                if (checkpointCounter == 6)
                {
                    GameManager.Instance.currentLevel.interactableObjects[0].SetActive(true);
                }

                if (AudioManager.instance)
                {
                    AudioManager.instance.Play("Checkpoint");
                }
            }
            
            if((GData.Instance.Current_Mode == 2 && GameManager.Instance.demoLevel == 4 || GameManager.Instance.demoLevel == 9)  || (GData.Instance.Current_Mode == 1 && GameManager.Instance.demoLevel == 1 || GameManager.Instance.demoLevel == 6))
            {
                other.gameObject.SetActive(false);
                Camera.main.transform.GetChild(0).GetComponent<ParticleSystem>().Play();
                checkpointCounter++;
                if (checkpointCounter < GameManager.Instance.currentLevel.Checkpoint.transform.childCount)
                {
                    GameManager.Instance.currentLevel.Checkpoint.transform.GetChild(checkpointCounter).gameObject.SetActive(true);
                    GameManager.Instance.currentLevel.Checkpoint.transform.GetChild(checkpointCounter).transform.GetComponent<Target>().enabled = true;
                }

                if (checkpointCounter == 3)
                {
                    GameManager.Instance.currentLevel.interactableObjects[0].SetActive(true);
                }
                if (AudioManager.instance)
                {
                    AudioManager.instance.Play("Checkpoint");
                }
            }

            if((GData.Instance.Current_Mode == 2 && GameManager.Instance.demoLevel == 0 || GameManager.Instance.demoLevel == 5) ||(GData.Instance.Current_Mode ==1 && GameManager.Instance.demoLevel == 2 || GameManager.Instance.demoLevel == 7))
            {
                other.gameObject.SetActive(false);
                Camera.main.transform.GetChild(0).GetComponent<ParticleSystem>().Play();
                checkpointCounter++;
                if (checkpointCounter < GameManager.Instance.currentLevel.Checkpoint.transform.childCount)
                {
                    GameManager.Instance.currentLevel.Checkpoint.transform.GetChild(checkpointCounter).gameObject.SetActive(true);
                    GameManager.Instance.currentLevel.Checkpoint.transform.GetChild(checkpointCounter).transform.GetComponent<Target>().enabled = true;
                }

                if (checkpointCounter == 4)
                {
                    GameManager.Instance.currentLevel.interactableObjects[0].SetActive(true);
                }
                if (AudioManager.instance)
                {
                    AudioManager.instance.Play("Checkpoint");
                }
            }

            if(GameManager.Instance.demoLevel == 3 || GameManager.Instance.demoLevel == 8)
            {
                other.gameObject.SetActive(false);
                Camera.main.transform.GetChild(0).GetComponent<ParticleSystem>().Play();
                checkpointCounter++;
                if (checkpointCounter < GameManager.Instance.currentLevel.Checkpoint.transform.childCount)
                {
                    GameManager.Instance.currentLevel.Checkpoint.transform.GetChild(checkpointCounter).gameObject.SetActive(true);
                    GameManager.Instance.currentLevel.Checkpoint.transform.GetChild(checkpointCounter).transform.GetComponent<Target>().enabled = true;
                }

                if (checkpointCounter == 3)
                {
                    GameManager.Instance.currentLevel.interactableObjects[0].SetActive(true);
                }
                if (AudioManager.instance)
                {
                    AudioManager.instance.Play("Checkpoint");
                }
            }

            if((GData.Instance.Current_Mode == 2 && GameManager.Instance.demoLevel == 1 || GameManager.Instance.demoLevel == 6) || (GData.Instance.Current_Mode == 1 && GameManager.Instance.demoLevel == 4 || GameManager.Instance.demoLevel == 9))
            {
                other.gameObject.SetActive(false);
                Camera.main.transform.GetChild(0).GetComponent<ParticleSystem>().Play();
                checkpointCounter++;
                if (checkpointCounter < GameManager.Instance.currentLevel.Checkpoint.transform.childCount)
                {
                    GameManager.Instance.currentLevel.Checkpoint.transform.GetChild(checkpointCounter).gameObject.SetActive(true);
                    GameManager.Instance.currentLevel.Checkpoint.transform.GetChild(checkpointCounter).transform.GetComponent<Target>().enabled = true;
                }

                if (checkpointCounter == 5)
                {
                    GameManager.Instance.currentLevel.interactableObjects[0].SetActive(true);
                }
                if (AudioManager.instance)
                {
                    AudioManager.instance.Play("Checkpoint");
                }
            }
        }
    }
}
