/**
	@Author:	Mihai Cornel	Romania			mhcrnl@gmail.com
	System:		Ubuntu 16.04	Code::Blocks 13.12	gcc 5.4.0
                	Fedora 24	Code::Blocks 16.01	gcc 5.3.1
	@Copyright:	2017
	@file:
*/
#include "queue.h"

int count = 0;
/**
    Create an empty queue
    */
void create(){
    front=rear=NULL;
}
/**
    Returns queue size
    */
void queuesize(){
    printf("\nQueue size: %d", count);
}
/**
    Enqueue the data
    */
void enq(int data){
    if(rear == NULL){
        rear = (struct node *)malloc(1*sizeof(struct node));
        rear->ptr = NULL;
        rear->info = data;
        front = rear;
    } else {
        temp = (struct node*)malloc(1*sizeof(struct node));
        rear->ptr = temp;
        temp->info = data;
        temp->ptr = NULL;
        rear = temp;
    }
    count++;
}
/**
    Displaying the queue elements
    */
void display(){
    front1 = front;
    if((front1==NULL)&&(rear=NULL)){
        printf("Queue nu are elemente.");
        return;
    }
    while(front1 != rear){
        printf("%d", front1->info);
        front1=front1->ptr;
    }
    if(front1 == rear)
        printf("%d", front1->info);
}
/* Dequeing the queue */
void deq()
{
    front1 = front;

    if (front1 == NULL)
    {
        printf("\n Error: Trying to display elements from empty queue");
        return;
    }
    else
        if (front1->ptr != NULL)
        {
            front1 = front1->ptr;
            printf("\n Dequed value : %d", front->info);
            free(front);
            front = front1;
        }
        else
        {
            printf("\n Dequed value : %d", front->info);
            free(front);
            front = NULL;
            rear = NULL;
        }
        count--;
}
/* Returns the front element of queue */
int frontelement()
{
    if ((front != NULL) && (rear != NULL))
        return(front->info);
    else
        return 0;
}

/* Display if queue is empty or not */
void empty()
{
     if ((front == NULL) && (rear == NULL))
        printf("\n Queue empty");
    else
       printf("Queue not empty");
}
