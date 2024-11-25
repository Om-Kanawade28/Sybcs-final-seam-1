#include<stdio.h>
void bubbleSort(int a[],int n){
    int i,j,temp;
    for(i = 0;i < n;i++){
        for(j = 0;j < n-i;j++){
            if(a[j] > a[j + 1]){
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
}
int main(){
    int n,i,a[20];
    printf("Enter the Size of Array:-");
    scanf("%d",&n);
    printf("Enter the Array Elements:-\n");
    for(i = 0;i < n; i++){
        scanf("%d",&a[i]);
    }
    printf("Your Array:-\n");
    for(i = 0; i< n;i++){
        printf("%d\n",a[i]);
    }
    bubbleSort(a,n);
    printf("Your Sorted Array:-\n");
    for(i = 0;i < n;i++){
        printf("%d\n",a[i]);
    }


    return 0;
}