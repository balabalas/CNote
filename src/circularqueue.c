
#include "stdio.h"
#include "stdbool.h"
#include "stdlib.h"
#define QueueSize 8

typedef struct {
    int front;
    int rear;
    int counter;
    int data[QueueSize];
}Queue;

void initQueue(Queue *queue)
{
    queue->front = 0;
    queue->rear = 0;
    queue->counter = 0;
}

bool QueueEmpty(Queue *queue)
{
    return queue->counter == 0;
}

bool QueueFull(Queue *queue)
{
//    if(queue->front != queue->rear){
//        return false;
//    }
//    else if(0 == queue->counter) {
//        return false;
//    }
//    else return true;
     return queue->counter == QueueSize;
}

int enterQueue(Queue *queue, int data)
{
    if(QueueFull(queue)){
        return 0;
    }
    else {
        queue->data[queue->rear] = data;
        queue->counter++;
        queue->rear = (queue->rear + 1) % QueueSize;
        return 1;
    }
}

int leaveQueue(Queue *queue, int *pdata)
{
    if(QueueEmpty(queue)){
        return 0;
    }
    else {
        *pdata = queue->data[queue->front];
        printf("At leaveQueue, the data is %d \n", *pdata);
        queue->counter--;
        queue->front = (queue->front+1) % QueueSize;
        return 1;
    }
}

void printQueue(Queue *queue)
{
    int num = queue->counter, front = queue->front;
    if(QueueEmpty(queue))
    {
        printf("This queue is empty. Please initialize it.\n");
    }
    else 
    {
        while(num != 0)
        {
            printf("  %d   ", queue->data[front]);
            front = (front+1) % QueueSize;
            num--;
        }
        printf("\n");
    }
}

int main(void)
{
    Queue *q = (Queue *)malloc(sizeof(Queue));
    int tem = 0, *d = &tem;
    initQueue(q);
    enterQueue(q, 12);
    enterQueue(q, 23);
    enterQueue(q, 65);
    enterQueue(q, 40);
    printQueue(q);
    if(leaveQueue(q, d))
    {
        printf("%d leave the queue.\n", *d);
        printQueue(q);
    }
    return 0;
}















