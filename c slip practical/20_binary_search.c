//Create a random array of n integers. Accept a value x from user and use binary search algorithm to check whether the number is present in the array or not and output the position if the number is present
#include<stdio.h>
#include<stdlib.h>
int binarySearch(int a[],int low,int high,int key){
    while(low <= high){
        int mid = low + (high - low)/2;
        if(a[mid] == key){
            return mid + 1;
        }
        if(a[mid] < key)//if(a[mid] > key)
        {
          low = mid +1;
        }else{
            high = mid -1;
        }
    }
    return -1;
}
int main(){
     int i,n,a[20],result,key;
     printf("Enter the Numberse of elements:-");
     scanf("%d",&n);
     printf("\nEnter the Array Elements in ascending:-");
     //printf("\nEnter the Array Elements in decending:-");
     for(i = 0;i < n;i++){
        scanf("%d",&a[i]);
     }
     printf("\nEnter the element for Search:-");
     scanf("%d",&key);
     result = binarySearch(a,0,n - 1,key);
     if(result != -1){
        printf("%d is found %d position",key,result);
     }else{
        printf("%d not founfd in the array",key);
     }
    return 0;
}