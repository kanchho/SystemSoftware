/*
 ============================================================================
 Name        : Plane.h
 Author      : Bibek Koirala
 Description : Declaring functions used in Plane.c
 ============================================================================
 */
#ifndef PLANE_H
#define PLANE_H

struct planeInfo
{
     char name[30];
     int seats;
     float wingSpan;
};

void structInitializer();
void structCreator(struct planeInfo flight, int i);
void printStruct();

#endif
