#include<stdio.h>
int SumDigits(int iNo)
{

int iDigit=0;     //iNo = -751 751 75 7 0 
int iSum=0;
                  //iDigit = 0 1 5 7 
if(iNo<0)
{                    //iSum= 1 6 13 
    iNo=-iNo;
}
while(iNo != 0)
{

iDigit=iNo % 10;
iSum=iSum+iDigit;
iNo= iNo / 10;
}

return iSum;
}

int main()
{
    
