#include<stdio.h>

int Summation()
{    
    int iSum=0;
     int iCount=0;
    
    for(iCount=1; iCount<=5; iCount++)
{
    iSum=iSum + iCount;
}   
    return iSum;

}
int main()
{
    int iret=0;
    
    iret=Summation();
    printf("Summation : %d\n",iret);
    return 0;
}