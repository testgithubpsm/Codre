#include<stdio.h>
int Summation(int Data[],int iSize)
{
    int iCount=0;
    int iSum=0;
    for(iCount=0;iCount<iSize;iCount++)
    {
        iSum=iSum+Data[iCount];
    }
    return iSum;
}
int main()
{
    int Arr[5];
    int iCount=0;
    int iRet=0;
    

    printf("Enter the number :\n ");
    for(iCount =0;iCount <5; iCount++)
    {
        scanf("%d",&Arr[iCount]);
    }
    printf("Elements from array : \n");
    for(iCount=0; iCount <5; iCount++)
    {
        printf("%d\n",Arr[iCount]);
    }
    iRet=Summation(Arr,5);
    printf("Addition : %d",iRet);



    return 0;
}