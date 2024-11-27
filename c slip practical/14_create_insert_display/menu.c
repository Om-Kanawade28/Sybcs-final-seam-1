#include <stdio.h>
#include <stdlib.h>
#include "singlylist.h"
int main()
{
    int ch;
    node *head;

    while (1)
    {
        printf("\n-------Menu-------\n");
        printf("1)create linked list\n");
        printf("2)display\n");
        printf("3)insert at begining\n");
        printf("Enter the choice:-");
        scanf("%d",&ch);
        switch(ch){
            case 1:
                  head = createlist();
                  printf("linked list created succsssfuly\n");
                  break;
            case 2:
                  display(head);
                  break;
            case 3:
                   head = insertbeg(head);
                   printf("Inserted;\n");
                   break;
            default:
                   printf("wrong choice");
                   exit;
        }
    }
    return 0;
}