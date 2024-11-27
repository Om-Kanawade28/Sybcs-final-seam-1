//Q.1 Read the data from file 'student.txt' containing names of students and their phone numbers. Accept a name of the student from user and use linear search algorithm to check whether the name is present in the file and output the phone number, otherwise output “student not in the list”.
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void linearsearch(int n);
typedef struct stud{
    char name[20];
    int phone;
}stud;
int fileread(stud a[20]){
    FILE *fp;
    int i = 0;
    fp = fopen("st.text","r");
    if(fp == NULL){
        printf("File not Exit");
    }else{
        while(!feof(fp)){
            fscanf(fp,"%s%d",&a[i].name,&a[i].phone);
        i++;
        }
        fclose(fp);
    }
    return i;
}
//main
void main()
{
    int i,n;
    char key[20];
    stud a[20];
    n = fileread(a);
    for(i = 0;i < n;i++){
        printf("%s %d\n",a[i].name,a[i].phone);
    }
    linearsearch(n);
}
void linearsearch(int n)
{
    stud a[20];
    n = fileread(a);
    char str[20];
    int index,flag = 0;
    printf("Enter student name:-");
    scanf("%s",&str);
    for(int i = 0; i < n;i++){
        if(strcmp(str,a[i].name)==0){
            flag = 1;
            index = i;
        }
    }
    if(flag == 1){
        printf("Student phone:-%d",a[index].phone);
    }else{
        printf("student not in the list");

    }
}