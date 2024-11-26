#include <stdio.h>
#include "singlylist.h"
int main()
{
    int ch;
    printf("--------------Menu_______________\n 1)create linked list\n2)delete specific element\n3)display linked list\n");
    printf("Enter the choice:-");
    scanf("%d", &ch);
    switch (ch)
    {
    case 1:
        int head = create_linked_list();
        printf("Your linked list created susscfuly");
        break;
    case 2:
        if (head == NULL)
        { 
            printf("List is empty.\n");
            break;
        }
        printf("\nEnter the element for delete:-");
        int key;
        scanf("%d", &key);
        delete_node(head, key);
        printf("\nnode deleted");
        break;
    case 3:
        if (head == NULL)
        { 
            printf("List is empty.\n");
            break;
        }
        printf("Your linked list:-\n");
        display(head);
        break;
    default:
        printf("Invlalid choice");
        exit;
    }

    return 0;
}