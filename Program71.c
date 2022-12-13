 #include<stdio.h>
#include<stdlib.h>
int Summation(int Arr[],int iSize)
{
    int iCount=0; int iSum=0;
    for(iCount=0; iCount <  iSize; iCount++)
    {
        iSum=iSum+Arr[iCount];
    }
    return iSum;

}
int main()  
{
    int *ptr=NULL; // *p pointer is nothng but the valu of the variable which reprecents the value
    int iCount=0; // &  stores the adress
    int iRet=0;
    int iLength=0;

    printf("Enter the number you want to store : ");
    scanf("%d",iLength);

    ptr=(int *)malloc(iLength *sizeof(int));
    printf("Enter the numbers : \n");
//        1            2            3
    for(iCount=0; iCount<iLength; iCount++)
    {
        scanf("%d",&ptr[iCount]);//4
    } 
    printf("elements from arry are : \n");

    for(iCount=0; iCount<iLength; iCount++)
    {
        printf("%d\n",&ptr[iCount]);
    }

    iRet=Summation(ptr,iLength);
    printf("Addition of all elementds : %d\n ",iRet);

    free(ptr);



    return 0;

}