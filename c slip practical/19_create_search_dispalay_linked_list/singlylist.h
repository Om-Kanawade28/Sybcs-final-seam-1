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
        }else{
            tail -> next = newnode;
            tail = newnode;
        }
        printf("Do you want to continue(0,1)?");
        scanf("%d",&choice);
    }
    return head;
}
void searchlist(node *head,int key){
    node *temp = head;
    int i = 1;
    while(temp != NULL){
        if(temp -> data == key){
            printf("%d find on the %d position",key,i);
        }
        i++;
        temp = temp -> next;
    }

}
void displaylist(node *head){
    node *temp = head;
    printf("Your linked list:-\n");
    while(temp != NULL){
        printf("%d\n",temp -> data);
        temp = temp -> next;
    }
}