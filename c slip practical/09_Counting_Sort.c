/*Q.1 Sort a random array of n integers (accept the value of n from user) in ascending order by using Counting sort algorithm.	*/
#include <stdio.h>
#include <stdlib.h>

void countingSort(int a[], int n)
{
    int max = a[0];
    for (int i = 1; i < n; i++)
    {     if (a[i] > max)
            max = a[i];
    }
    int count[max + 1];
    for (int i = 0; i <= max; i++)
        count[i] = 0;
    for (int i = 0; i < n; i++)
        count[a[i]]++;
    for (int i = 1; i <= max; i++)
        count[i] += count[i - 1];
    int output[n];
    for (int i = n - 1; i >= 0; i--)
    {
        output[count[a[i]] - 1] = a[i];
        count[a[i]]--;
    }
    for (int i = 0; i < n; i++)
    {
        a[i] = output[i];
    }
}
int main()
{
    int n, a[20], i;
    printf("ENter the Size of Array:-");
    scanf("%d", &n);
    printf("Enter the Elements :-\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    countingSort(a, n);
    printf("Your Shorted Array:-\n");
    for (i = 0; i < n; i++)
    {
        printf("%d\n", a[i]);
    }

    return 0;
}
