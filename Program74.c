//display evencount and oddcount

#include<stdio.h>
#include<stdlib.h>

//float Average(int *Arr,int iSize)

//step 5 : perform operation of array 
void DisplayEvenOddCount(int Arr[], int iSize) 
{
    
    int  iCount=0;
    int iEvenCount=0;
    int OddCount =0;


    for(iCount=0;  iCount < iSize ; iCount++)
    {
       if((Arr[iCount] % 2 ) == 0) 
         {
            iEvenCount++;
         }else 
         {
            OddCount++;
         }      
    }
    printf("EvenCount : %d\n ",iEvenCount);
    printf("OddCount : %d\n ",iOddCount);

}
int main()
{


    int *ptr=NULL;
    int iLength=0, i=0;
    void  iRet=0;

    // 1 Accept size of array
    printf("Enter the number of elements : \n");
    scanf("%d",&iLength);

    //2  allocate memory for array
    ptr =(int *)malloc(iLength * sizeof(int));

    // 3 accept elements
    printf("Please enter the number :\n");
    for(i=0; i<iLength; i++)
    {
        scanf("%d",&ptr[i]);

    }

    //4  call the function 
    iRet=DisplayEvenOddCount(ptr,iLength);
    
    printf("Count : %d",iRet);

    free(ptr);

    // 6  Deallocate the memory
    return 0;
}