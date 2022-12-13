#include<stdio.h>
int CountEvenOddDigits(int iNo)
{
int iEvenCount=0;
int iOddCount=0;
int iDigit=0;

if(iNo ==0)
{
    printf("Number of even digits are : 1 \n");
    printf("Number of odd digits are : 0 \n");
    
}
                  

while(iNo != 0)
{

iDigit=iNo % 10;
if((iDigit %2) ==0 )
{
    iEvenCount++;
}else 
{
    iOddCount++;
}

iNo= iNo / 10;

}
printf("Number of even digits are : %d \n " ,iEvenCount);
printf("Number of odd digits are  :  %d \n ",iOddCount);
}
int main()
{
 int iValue=0;
 int iRet =0;
   printf("Enter the  value : ");
   scanf("%d",&iValue);

   iRet=CountEvenOddDigits(iValue);
if(bRet == true)
    {
    printf("Number you entered is a Pallindrom number  ");
    }else
    {
        printf("Number you entered is not a Pallindrom number  ");
    }

return 0;
}