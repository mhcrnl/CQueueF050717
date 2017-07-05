#ifndef QUEUE_H_INCLUDED
#define QUEUE_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>

struct node{
    int info;
    struct node *ptr;
} *front, *rear, *temp, *front1;

int frontelement();
void enq(int data);
void deq();
void empty();
void display();
void create();
void queuesize();

//int count = 0;


#endif // QUEUE_H_INCLUDED
