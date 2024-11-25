#include<stdio.h>
void insertionSort(int a[],int n){
    int i,j;
    for(i = 1;i < n;i++){
        int j = i - 1;
        int key = a[i];
        while(j >= 0 && a[j] > key){
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = key;

    }
}
int main()
{
    int a[20],n,i;
    printf("Enter the Size of Array:-");
    scanf("%d",&n);
    printf("\nEnter the Array Elements:-\n");
    for(i = 0;i < n;i++){
        scanf("%d",&a[i]);
    }
    printf("Your array:_\n");
    for(i= 0;i < n;i++){
        printf("%d\n",a[i]);
    }
    insertionSort(a,n);
    printf("Your asending order:-\n");
    for(i = 0;i < n;i++){
        printf("%d\n",a[i]);
    }


    return 0;
}