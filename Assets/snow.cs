using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class snow : MonoBehaviour
{
   public Transform player;
   private void Update()
   {
      var trans = transform.position;
      trans.x = player.position.x;
      trans.z = player.position.z;
      transform.position = trans;
   }
}
