// Q.1 Implement an array of integers of size 10 with the create, delete, display operations. Write a menu driven program to call these operations.Q.1 Implement an array of integers of size 10 with the create, delete, display operations. Write a menu driven program to call these operations.
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n, i, a[20], ch, pos;
    int key;
    while (1)
    {
        printf("\n-------------Menu-------------\n");
        printf("1)create array\n");
        printf("2)display\n");
        printf("3)insert \n");
        printf("4)delete\n");
        printf("Enter your choice:-");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            printf("Enter the Size of the Array:-");
            scanf("%d", &n);
            printf("Enter the elements of Array:-\n");
            for (i = 0; i < n; i++)
            {
                scanf("%d", &a[i]);
            }
            break;
        case 2:
            printf("Your array:-");
            for (i = 0; i < n; i++)
            {
                printf("%d  ", a[i]);
            }
            break;
        case 3:
            printf("\nEnter the element to inter in array:-");
            scanf("%d", &key);
            printf("\nEnter the position of element:-");
            scanf("%d", &pos);
            for (i = n; i > pos; i--)
            {
                a[i] = a[i - 1];
            }
            a[pos] = key;
            n++;
            break;
        case 4:
            printf("\nEnter the postion for delete:-");
            scanf("%d", &pos);
            for (i = pos; i < n -1; i++)
            {
                a[i] = a[i + 1];
            }
            n--;
            break;
        default:
            printf("Invalid");
            exit;
        }

    }
        return 0;
        
}