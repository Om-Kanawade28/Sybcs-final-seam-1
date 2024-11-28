#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#define MAX 100
typedef struct stack{
    int data[MAX];
    int top;
}stack;
void init(stack *S){
    S->top = -1;
}
bool isempty(stack *S){
    return S->top==-1;

}
bool isfull(stack *S){
    return S->top == MAX - 1;
}
stack push(stack S,int value){
     if(isfull(&S) == true){
        printf("Stack is Full");
        return S;
     }
     S.data[++S.top] = value;
     return S;
}
stack pop(stack S){
    if(isempty(&S)){
        printf("stack is empty");
        return S;
    }
    S.top--;
    return S;
}
int peek(stack *S){
    if(isempty(S)){
        printf("stack is empty");
    }
    return S->data[S->top];
}