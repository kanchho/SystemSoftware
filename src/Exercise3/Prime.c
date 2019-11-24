/*
 ============================================================================
 Name        : Prime.c
 Author      : Bibek Koirala
 Description : Checks whether the elements of array are prime or not
 ============================================================================
 */

#include "Prime.h"
#include <stdio.h>

int isPrime(int numToVerify)
{ 
 
  if (numToVerify < 2)
  {
    return 0;
  }

  
   for (int i = 2; i <= numToVerify / 2; i++)
    {
       if (numToVerify % i == 0)
       {
         return 0;
       }
   
      
  }
  return 1; 
}