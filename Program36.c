#include<stdio.h>

//Input : 6
//output : 4 , 5
//Input : 15
//output : 2,4,6,7,8,9,10,11,12,13,14
void DisplayNonFactors(int iNo)
{
    int iCount=0;
    printf("Non factors of %d are : \n",iNo);
    
   for(iCount=1; iCount<iNo; iCount++)
   {
    if((iNo % iCount) != 0)
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

    DisplayNonFactors(iValue);

    return 0;
}