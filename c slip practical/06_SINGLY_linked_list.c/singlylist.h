#ifndef SINGLYLIST_H
#define SINGLYLIST_H
#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
typedef struct node node;

node* create_linked_list()
{
    node *head = NULL,*newnode,*tail;
    int choice = 1;
    while(choice == 1)
    {
        printf("Enter the data");
        newnode = (node*)malloc(sizeof(node));
        scanf("%d",&newnode -> data);
        newnode -> next = NULL;
        if(head == NULL){
            head = newnode;
            tail = newnode;
        }else{
            tail -> next = newnode;
            tail = newnode;
        }
        printf("Do you want enter data(0,1):-");
        scanf("%d",&choice);
    }
    return head;
}
void delete_node(node *head,int key){
    node *prev = NULL,*temp = head;
    while(temp != NULL ){
        if(temp -> data == key){
          if(prev == NULL){
            head = temp -> next;
            free(temp);
          }else{
            prev -> next = temp -> next;
            free(temp);
            temp = prev -> next;
          }
        }else{
        prev-> next = temp;
        temp = temp -> next;
        }
    }
}
void display(node *head){
    node *temp = head;

    
    while(temp != NULL){
        printf("%d\n",temp -> data);
        temp = temp ->next;
    }
}


#endif