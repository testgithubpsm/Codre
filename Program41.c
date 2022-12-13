 //display even factors

#include<stdio.h>

void DisplayEvenFactors(int iNo)
{
    int iCount=0;
    for(iCount=1; iCount<= (iNo/2);iCount++)
    {
        if((iNo % iCount == 0) && (iNo % 2 ==0))
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

 DisplayEvenFactors(iValue)

    return 0;
}