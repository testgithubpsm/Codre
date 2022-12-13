#include<stdio.h>
int CountDigits(int iNo)
{

int iDigit=0;

int iCount =0;
 
if(iNo==0)//fliter
{
    return 1;
}
if(iNo<0)//updator
{
    iNo= -iNo;
}

while(iNo > 0)
{
iDigit = iNo % 10;
iNo= iNo/10;
iCount++;
}
return iCount;
}
int main()
{
    int iValue=0;
    int iRet=0;


    printf("Please Enter the number :\n");
    scanf("%d",&iValue);

    iRet=CountDigits(iValue);

    printf("Number of Digits are %d",iRet);

return 0;
}