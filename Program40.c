#include<stdio.h>

void DisplayReverse(int iNo)
{
   int iCount=0;
   
   iCount =iNo;
   while(iCount=iNo)
   {
        printf("%d\t",iCount);
        iCount--;
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