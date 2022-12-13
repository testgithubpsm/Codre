#include<stdio.h>
#include<stdlib.h>

int main()
{
    int Count=0;
    int Arr[5];

    printf("Enter the number :\n");
    for(iCount=0; iCount<5; iCount++)
    {
        scanf("%d",&Arr[iCount]);
    }
    printf("Elements From arry are : \n");
    for(iCount=0; iCount<5; iCount++)
    {
        printf("%d\n",Arr[iCount]);
    }

    return 0;

}