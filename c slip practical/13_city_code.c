// Q.1Read the data from file 'cities.txt' to check whether the name is present in the file and output the STD code, otherwise output “city not in the list”.			[15]containing names of cities and their STD codes. Accept a name of the city from user and use linear search algorithm
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct city
{
    char name[20];
    int code;
} city;
void linearsearch(city a[]);
int readfile(city a[])
{
    FILE *fp;
    int i = 0;
    fp = fopen("cities.text", "r");
    if (fp == NULL)
    {
        printf("FIle is not Found");
    }
    else
    {
        while (!feof(fp))
        {
            fscanf(fp,"%s %d", &a[i].name, &a[i].code);
            i++;
        }
        fclose(fp);
    }
    return i;
}

int main()
{
    int n, i;
    city a[20];
    n = readfile(a);
    for (i = 0; i < n; i++)
    {
        printf("%s %d\n", a[i].name, a[i].code);
    }
    linearsearch(a);

    return 0;
}
void linearsearch(city a[])
{
    int i, n;
    char str[20];
    int flag = 0,index;
    n = readfile(a);
    printf("Enter the City Name:-");
    scanf("%s", &str);
    for (i = 0; i < n; i++)
    {
        if (strcmp(str, a[i].name) == 0)
        {
            flag = 1;
            index = i;
        }
        
     
    }
    if(flag == 1){
        printf("code:==%d",a[index].code);
    }else{
        printf("Not found");
    }
}