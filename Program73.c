//accept n number from user and count even numbers from that number 

//Take n numbers from user,and write Avarge of Numbers
#include<stdio.h>
#include<stdlib.h>

//float Average(int *Arr,int iSize)

//step 5 : perform operation of array 
int CountEven(int Arr[], int iSize) 
{
    
    int  iCount=0;
    int iEvenCount=0;


    for(iCount=0;  iCount < iSize ; iCount++)
    {
       if((Arr[iCount] % 2 ) == 0) 
         {
            iEvenCount++;
         }      
    }
    return iEvenCount;

}
int main()
{


    int *ptr=NULL;
    int iLength=0, i=0;
    int  iRet=0;

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
    iRet=CountEven(ptr,iLength);

    printf("EvenCount are  : %d\n",iRet);

    free(ptr);

    // 6  Deallocate the memory
    return 0;
}