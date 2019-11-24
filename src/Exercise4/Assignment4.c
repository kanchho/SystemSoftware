/*
 ============================================================================
 Name        : Assignment4.c
 Author      : Bibek Koirala
 Description : Practicing the use of multiple files and structs
 ============================================================================
 */

#include <stdio.h>
#include <string.h>
#include "Plane.h"
 
 
int main() 
{
  int count = 0;
  printf("How many planes do you want ?\n");
  scanf("%d", &count);
  
  struct planeInfo flight;

  structInitializer();

  int i = 0;

  if (count > 5){
   count = 5;  
  }

  for(i = 0 ; i < count; i++){
  
      printf("Enter details for plane %d \n\n", i+1);
      getchar();
      printf("Name of plane: ");
      fgets(flight.name, 30, stdin);
        if (strcmp(flight.name,"\n") == 0){
          strcpy(flight.name, "NULL");
         }
        else{
          flight.name[strlen(flight.name)-1] = 0;
        }
  
      printf("Number of seats: ");
      scanf(" %d", &flight.seats);
      printf("Wing Span: ");
      scanf(" %f", &flight.wingSpan);
      getchar();
    
      structCreator(flight, i);
      printf("\n\n");
  }


  printStruct(count);
 
  return 0;

  }
