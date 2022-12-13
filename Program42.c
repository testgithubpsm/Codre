#include<stdio.h>

void DisplayEvenFactors(int iNo)
{
    int iCount=0;

    for(iCount=2; iCount<= (iNo/2);iCount=iCount+2)
    {
        if(iNo % iCount == 0)
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

 DisplayEvenFactors(iValue);

    return 0;
}