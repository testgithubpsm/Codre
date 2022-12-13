#include<stdio.h>

void DisplayFactors(int iNo)
{
        int iCount=0;
        printf("Fcators are : \n");

        for(iCount=1; iCount < iNo; iCount++)
        {
        if((iNo % iCount) == 0)
        {
            printf("%d\n",iCount);
        }


        }
}
int main()
{
    int iValue=0;
    printf("Enter the number : \n");
    scanf("%d",&iValue);

    DisplayFactors(iValue);
    return 0;
}