#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
typedef struct node node;
node* createlist(){
    node *head = NULL,*newnode,*tail;
    int choice = 1;
    while(choice == 1){
    printf("Enter the Data:-");
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
    printf("Do you want to continue(0,1)?");
    scanf("%d",&choice);

    }
    return head;
}
void display(node *head){
    node *temp = head;
    printf("Your linked list:-");
    while(temp != NULL){
        printf("%d ",temp -> data);
        temp = temp -> next;
    }
}
node* reverslist(node *head){
    node *p=NULL,*q=NULL,*r=NULL;
    p = head;
    while(p!=NULL){
        r = q;
        q = p;
        p = p -> next;
        q -> next = r;
    }
    head = q;

return head;
 

}