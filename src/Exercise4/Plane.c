/*
 ============================================================================
 Name        : Plane.c
 Author      : Bibek Koirala
 Description : Performing operations on structs using multiple functions
 ============================================================================
 */
#include "Plane.h"
#include <stdio.h>
#include <string.h>

struct planeInfo plane[5];

void structInitializer(){
  for (int i = 0; i < 5; i++){
    strcpy(plane[i].name,"NULL");
    plane[i].seats = -1;
    plane[i].wingSpan = -1;
  }

}

void structCreator(struct planeInfo flight, int i){
    strcpy(plane[i].name, flight.name);
    plane[i].seats = flight.seats;
    plane[i].wingSpan = flight.wingSpan;

}

void printStruct(){   
   for (int i = 0; i < 5; i++){
    
     printf("Name: \t\t %s \n", plane[i].name);
     printf("Seats: \t\t %d \n", plane[i].seats);
     printf("Wing Span: \t %.2f \n", plane[i].wingSpan);
     printf("\n");
  }  

}
