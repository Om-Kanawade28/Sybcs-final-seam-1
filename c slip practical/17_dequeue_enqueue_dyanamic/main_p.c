//1 Implement a linear queue library of integers using a dynamic implementation of the queue and implementing the init(Q), enqueue(Q) and dequeue(Q) operations. Write a program that includes queue library and calls different queue operations.	
#include<stdio.h>
#include<stdlib.h>
#include "linear_queue_library.h"
int main(){
    Queue Q;
    init(&Q);
    enqueue(&Q,1);
    enqueue(&Q,2);
    enqueue(&Q,3);
    printf("first element:-%d",dequeue(&Q));
    return 0;
}