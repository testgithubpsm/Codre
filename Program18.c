#include<stdio.h>

void Display(int iValue)
{
    int iCount=0;                   // iCount 0 1
    
     iCount =1;          //1
    while(iCount<=iValue)    //2
    {
        printf("Jay Ganesh..!!"); //4
        iCount++;       //3

    }
}
int main()
{
    int iNo=0;
    printf("Enter the number of iteration : ");
    sacnf("%d",&iNo);

    Display(iNo);
    return 0;
}