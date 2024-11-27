#include <stdio.h>
#include <stdlib.h>
#include "singlylist.h"
int main()
{
    int ch;
    node *head;
    while (1)
    {
        printf("\n---------Menu----------\n");
        printf("1)create liked list\n");
        printf("2)display\n");
        printf("3)reversed\n");
        printf("Enter the choice:-");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            head = createlist();
            break;
        case 2:
            display(head);
            break;
        case 3:
            head = reverslist(head);
            printf("linked list is reversed ;\n");
            break;
        default:
            exit(0);
        }
    }
    return 0;
}