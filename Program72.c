//Take n numbers from user,and write Avarge of Numbers
#include<stdio.h>
#include<stdlib.h>

//float Average(int *Arr,int iSize)
float Average(int Arr[], int iSize) 
{
    int iSum=0; 
    int  iCount=0;

    for(iCount=0;  iCount < iSize ; iCount++)
    {
        iSum=iSum + Arr[iCount];
    }
    return (iSum / iSize);
}


int main()
{


    int *ptr=NULL;
    int iLength=0, i=0;
    float fRet=0.0f;

    printf("Enter the number of elements : \n");
    scanf("%d",&iLength);

    ptr =(int *)malloc(iLength * sizeof(int));

    printf("Please enter the number :");
    for(i=0; i<iLength; i++)
    {
        scanf("%d",&ptr[i]);

    }

    fRet=Average(ptr,iLength);
    printf("Averge : %f\n",fRet);

    free(ptr);
    return 0;
}