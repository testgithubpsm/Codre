#include<stdio.h>

void DisplayReverse(int iNo)
{
   int iCount=0;
   
   
   for(iCount=iNum; iCount<=10; iCount--)
   {
        printf("%d\t",iCount);
        
    }
    
    
}
int main()
{
    int iValue=0;

    printf("Enter the number : \n");
    scanf("%d",&iValue);

    DisplayReverse(iValue);

    return 0;
}