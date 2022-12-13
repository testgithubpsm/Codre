#include<stdio.h>
int SumOfDigits(int iNo)
{

int iDigit=0;
int iSum=0;

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
iSum=iSum+iDigit;
iNo= iNo/10;

}
return iSum;
}
int main()
{
    int iValue=0;
     int iRet=0;


    printf("Please Enter the number :\n");
    scanf("%d",&iValue);

    iRet=SumOfDigits(iValue);

    printf("Number of Digits are %d",iRet);

return 0;
}