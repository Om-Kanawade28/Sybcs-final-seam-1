#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#define MAX 100
typedef struct Queue{
    int data[MAX];
    int front;
    int rear;
}Queue;
void init(Queue *Q){
    Q->front = -1;
    Q->rear = -1;
}
bool iQEmpty(Queue *Q){
    return Q -> front == -1;
}
bool iQFull(Queue *Q){
    return Q->rear == MAX - 1;
}
Queue enqueue(Queue Q,int data){
    if(iQEmpty(&Q)){
        Q.data[++Q.rear] = data;
        Q.front++;
        return Q;
    }
    if(iQFull(&Q)){
        printf("Queue is FUll");
        return Q;

    }
     Q.data[++Q.rear] = data;
     return Q;

}
Queue dequeue(Queue Q){
    if(iQEmpty(&Q)){
        printf("Noting is to dequeue");

    }
    printf("delete element:-%d\n",Q.data[Q.front]);
    Q.front++;
    return Q;
}