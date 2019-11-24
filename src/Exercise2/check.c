#include <stdio.h>

int isTetranacci(int);


int main()
{
  int num;
  while (1)
  {
    printf("Enter a number: ");
    scanf("%d",&num);

    isTetranacci(num);
  }
  return 0;
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
      {
        printf("Number %d is Tetranacci\n", numToVerify);
      }
   else
     printf("Number %d is not Tetranacci\n", numToVerify);

  return 0;
}
