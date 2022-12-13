#include<stdio.h>

int Factorial(int iValue)
{    
    int iFact=1;
     int iCount=0;
    
    for(iCount=1; iCount<=iValue; iCount++)
{
    iFact=iFact * iCount;
}   
    return iFact;

}
int main()
{
    int iret=0;
    int iNo=0;

    printf("Enter the number : \n");
    scanf("%d",&iNo);
    
    iret=Factorial(iNo);

    printf("Factorial of %d is %d \n",iNo,iret);
    return 0;
}