#include<stdio.h>
#include<stdlib.h>
#include "stack_library_static.h"
int main(){
    stack S;
    init(&S);
    S = push(S,1);
    S = push(S,2);
    printf("%d",peek(&S));
     printf("top element : %d\n", peek(&S));

    S = pop(S);
    S = push(S,50);

    while(!isempty(&S)) {
        printf("Popping elements: %d\n",peek(&S));
        S = pop(S);
    }
    return 0;
}