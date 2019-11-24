/*
 ============================================================================
 Name        : Tetranacci.c
 Author      : Bibek Koirala
 Description : Checks whether the elements of array are Tetranacci or not.
 ============================================================================
 */

#include "Tetranacci.h"
#include <stdio.h>

int isTetranacci(int numToVerify)
{
  int num1 = 0, num2 = 0, num3 = 0, num4 = 1,   sumOfFour = 0;

  if (numToVerify < 0)
  {
    return 0;
  }

  else if (numToVerify == 0 || numToVerify == 1)
  {
    return 1;
  }

  else 
  {
     sumOfFour = num1 + num2 + num3 + num4;

      while (sumOfFour < numToVerify)
      {
        num1 = num2;
        num2 = num3;
        num3 = num4;
        num4 = sumOfFour;
        sumOfFour = num1 + num2 + num3 +num4;

      }

      if (sumOfFour == numToVerify)
      {
        return 1;
      }
      else
      {
        return 0;
      }
  }
}