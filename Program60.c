#include<stdio.h>
#include<stdbool.h>

int CheckPallindrom(int iNo)
{
     int iDigit=0;
     int iRev=0;
     int iTemp=iNo;
     int iEvenCount=0;
     int iOddCount=0;

     while(iNo !=0)
     {
        iDigit=iNo % 10;
         if((iDigit % 2) ==0 )
         {
            iEvenCount++;
         }else 
         {
            iOddCount++;
         }
        iRev=((iRev*10)+ iDigit);
        iNo = iNo /10;
     }
     printf("EvenCount is : %d\n",iEvenCount);
        printf("Odd Count is : %d\n ",iOddCount);
     return(iRev ==iTemp);
}




int main()
{
    int ia=0;
    bool bRet=false;
    
    printf("Enter the number : ");
    scanf("%d",&ia);

    bRet=CheckPallindrom(ia);
    if(bRet == true)
    {
    printf("Number you entered is a Pallindrom number  ");
    }else
    {
        printf("Number you entered is not a Pallindrom number  ");
    }


    return 0;
} 