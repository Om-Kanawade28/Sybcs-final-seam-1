#include<stdio.h>
#include<stdlib.h>
#include "linear_library_queue.h"
int main(){
    Queue Q;
    init(&Q);
    Q = enqueue(Q,10);
    Q = enqueue(Q,20);
    Q = enqueue(Q,30);

    Q = dequeue(Q);
    Q = dequeue(Q);
    Q = dequeue(Q);


    return 0;
}