//Demonstration of iteration using for loop
#include<stdio.h>

void Display(int iValue)
{

    int iCount=0;
    //    1         2             3
    for(iCount=1; iCount<=iValue; iCount++)
    {
        printf("Jay Fanesh...!!\n");//4
    }
}
int main()
{
    int iNo=0;
    
    printf("Enter the number of iteration : ");
    scanf("%d",&iNo);

    Display(iNo);
    return 0;
}