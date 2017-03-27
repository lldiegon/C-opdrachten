#include <stdio.h>
#include "queue.h"

void init_queue(Queue* pq){
    pq->head = -1;
    pq->tail = -1;
}
void enqueue(Queue* pq, int data){
    if (pq->tail > QUEUESIZE -1){
        printf("queue is vol! \n");
    }
    else {
        if (pq->head == -1){
            pq->head = 0;
            (pq->tail)++;
            pq->a[pq->tail] = data;
            
        }
        else{
            (pq->tail)++;
            pq->a[pq->tail] = data;
        }
    }
    
}
int dequeue(Queue* pq){
    int data;
     if (pq->head == - 1 || pq->head > pq->tail)
    {
     printf("De queue kan niet kleiner dan dit! \n");
     return 0;
    }
    else
    {
        data = pq->a[pq->head];
        pq->head = pq->head + 1;
    }
     return data;
    
}
void show(Queue q){
    if (q.head == - 1)
        printf("Queue is empty \n");
    else
    {
     printf("Queue is : \n");
     for (int i = q.head; i <= q.tail; i++){
        printf("%d ", q.a[i]);
     }
        printf("\n");
    }
}