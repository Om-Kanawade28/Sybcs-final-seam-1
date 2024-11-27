#include<stdio.h>
#include<stdlib.h>
#include "singlylist.h"
int main(){
    int ch;
    node *head = NULL;
    while(1){
        printf("\n--------------------Menu-------------------\n");
        printf("1)create linked list\n");
        printf("2)display linked list\n");
        printf("Enter the choice:-");
        scanf("%d",&ch);
        switch(ch){
            case 1:
                head = createlist();
                printf("\nYour Linked list created successful\n");
                break;
            case 2:
                displaylist(head);
                break;
            default:
                printf("Invalid");
                exit(0);
               
        }

    }

    return 0;
}