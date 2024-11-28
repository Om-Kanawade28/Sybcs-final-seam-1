#include<stdlib.h>
#include<stdio.h>
#include<stdbool.h>


typedef struct Node{
    int data;
    struct Node *next;
}Node;

typedef struct Queue{
    Node *front;
    Node *rear;
}Queue;

void init(Queue *Q){
    Q -> front = NULL;
    Q -> rear = NULL;
}
bool isEmpty(Queue *q){
    return q->front == NULL;
}

void enqueue(Queue *q,int value){
    Node *newnode = (Node*)malloc(sizeof(Node));
    newnode -> data = value;
    newnode -> next = NULL;
    if(isEmpty(q)){
        q -> front = newnode;
        q -> rear = newnode;
    }else{
        q ->rear->next= newnode;
        q->rear = newnode;
    }
    
}
int dequeue(Queue *q){
    if(isEmpty(q)){
        printf("Queue is empty.Noting to dequeue");
        return -1;
    }
    Node *temp = q->front;
    int dequeuedvalue = temp->data;

    q->front = q->front->next;
    if(q->front==NULL){
        q->rear=NULL;
    }
    free(temp);
    return dequeuedvalue;
}
 

