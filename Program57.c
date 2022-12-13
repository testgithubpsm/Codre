#include<stdio.h>
int Display(int iNo)
{

    int iEvenCount=0;
    int iOddCount=0;
    int iDigit=0;

    if(iNo ==0 )
    {
        iEvenCount++;
    }
    while(iNo !=0)
    {
        iDigit = iNo % 10;
        if((iDigit % 2 ) == 0  )
        {
            iEvenCount;
        }else
        {
            iOddCount;
        }
        iNo = iNo / 10;
    }
    printf("Count of Even digits are :%d \n",iEvenCount);
    printf("Count of Odd digits are :%d \n",iOddCount);
}



int main()
{
    int ia=0;
    int iRet=0;
    printf("Enter thr number :");
    scanf("%d",&ia);

    iRet = Display(ia);


    return 0;
}

