#include "singlylist.h"
#include<stdio.h>
#include<stdlib.h>
int main(){
    int key,ch,head = NULL;
    while(1){
    printf("\n------------Menu-----------\n");
    printf("1)create\n");
    printf("2)search element\n");
    printf("3)display\n");
    printf("Enter the choice:-");
    scanf("%d",&ch);
    switch(ch){
        case 1:
              head = createlist();
              printf("linked list created;");
              break;
        case 2:
              printf("Enter the element to search:-");
              scanf("%d",&key);
              searchlist(head,key);
              break;
        case 3:
              displaylist(head);
              break;
        default:
              printf("Invalid");
              exit;
    }
    }
    return 0;
}