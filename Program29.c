#include<stdio.h>

int Summation(int iValue)
{    
    int iSum=0;
     int iCount=0;
    
    for(iCount=1; iCount<=iValue; iCount++)
{
    iSum=iSum + iCount;
}   
    return iSum;

}
int main()
{
    int iret=0;
    int iNo=0;

    printf("Enter the number : \n");
    scanf("%d",&iNo);
    
    iret=Summation(iNo);

    printf("Summation : %d\n",iret);
    return 0;
}