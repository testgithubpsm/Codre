#include<stdio.h>

int  SumNonFactors(int iNo)
{
    int iCount=0;
    int iSum=0;

        
   for(iCount=1; iCount<iNo; iCount++)
   {
    if((iNo % iCount != 0))
   {
    iSum =iSum+iCount;
   }
   }
   return iSum;

}


int main()
{
    int iValue=0;
    int iRet=0;

    printf("Enter the number : \n");
    scanf("%d",&iValue);

    iRet=SumNonFactors(iValue);
    printf("Summantion of nonfactors  : %d\n",iRet);

    return 0;
}