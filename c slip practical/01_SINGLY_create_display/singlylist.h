#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
typedef struct node node;
node* createlist(){
    node *head = NULL,*tail,*newnode;
    int choice = 1;
    while(choice == 1){
        printf("Enter the data:-");
        newnode = (node*)malloc(sizeof(node));
        scanf("%d",&newnode -> data);
        newnode -> next = NULL;
        if(head == NULL){
            head = newnode;
            tail = newnode;

        }
        else{
            tail -> next = newnode;
            tail = newnode;
        }
        printf("\nDo you wannt to continue(0,1)?");
        scanf("%d",&choice);
    }
    return head;
}
void displaylist(node *head){
    node *temp = head;
    printf("\nYour linked list:-");
    while(temp != NULL){
        printf("%d ",temp -> data);
        temp = temp -> next;
    }
}
