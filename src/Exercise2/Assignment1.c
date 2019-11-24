/*
File:		Assignment1.c
Author:		Bibek Koirala
Description:	Checks if number is Tetranacci or not
*/

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int sumOfOdd(int );
int randomNumber();
int isTetranacci(int );

int main()
{
  int random = randomNumber();

  printf("Random number: %d\n", random);

  int sum = sumOfOdd(random);

  printf("Sum of odd numbers: %d\n", sum);

  isTetranacci(sum);

  return 0;
}


int randomNumber()
{

 int random = 0;

 srand(time(NULL));

 random = rand() % 1001;  //1000 included
 return random;

}


int sumOfOdd(int addUpTo)
{
  int oddSum = 0;
  for (int i = 1; i < addUpTo; i++)
  {
    if (i % 2 != 0)
        oddSum = oddSum + i;

  }
  return oddSum;
}

int isTetranacci(int numToVerify)
{
  int num1 = 0, num2 = 0, num3 = 0, num4 = 1, sumOfFour = 0;


  if (numToVerify == 0 || numToVerify == 1)
  {
    printf("Number %d is a Tetranacci\n", numToVerify);
    return 0;
  }


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
       printf("Number %d is Tetranacci\n", numToVerify);

   else
       printf("Number %d is not Tetranacci\n", numToVerify);

  return 0;
}
