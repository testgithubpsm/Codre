// check wherther number present or not 
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>


// Step 5 : Perform the operation on array
bool CheckOccurance(int Arr[], int iSize, int iNo)

{
    int iCnt =0, i=0;
    int iFrequency=0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt]==iNo )
        {
           iFrequency++;
        }
        if(iFrequency == 0 )
        {
            return true;
        }else 
        {
            return false;
        }
        
            
    }
    return iFrequency;
}

int main()
{
    int *ptr = NULL;
    int iLength = 0, i = 0;
    int iValue=0; bool bRet=0;

    // Step 1 : Accept size of array
    printf("Enter number of elements : \n");
    scanf("%d",&iLength);

    // Step 2 : Allocate memory for array
    ptr = (int *)malloc(iLength * sizeof(int));

    // Step 3 : Accept the elements of array
    printf("Enter the elements : \n");

    for(i = 0 ;i < iLength; i++)
    {
        scanf("%d",&ptr[i]);
    }

    printf("Enter the number to find out the frequency : \n");
    scanf("%d",&iValue);

    // Step 4 : Call the function
      bRet= CheckOccurance(ptr, iLength ,iValue);

       if(bRet == true)
       {
        printf("%d is Occured in the array \n ",iValue);
        
       }else
        {
            printf("%d is not Occured in the array \n ",iValue);
        
        }    

    // Step 6 : Deallocate the memory
    free(ptr);

    return 0;
}