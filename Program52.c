#include<stdio.h>
int CountEvenDigits(int iNo)
{
int iEvenCount=0;
int iDigit=0;

if(iNo ==0)
{
    return 1;
}
                  
if(iNo < 0)
{                     
    iNo=-iNo;
}
while(iNo != 0)
{

iDigit=iNo % 10;
if((iDigit %2) ==0 )
{
    iEvenCount++;
}

iNo= iNo / 10;

}

return iEvenCount;
}

int main()
{
 int iValue=0;
 int iRet =0;
   printf("Enter the  value : ");
   scanf("%d",&iValue);

   iRet=CountEvenDigits(iValue);

printf("Number of even Digits   :%d ",iRet);

    return 0; 
}

