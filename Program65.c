#include<stdio.h>
int MaxDigit(int iNo)
{
    int iMax=0;
    int iDigit =0;

    if(iNo < 0)
    {
        iNo =-iNo;
    }
    while(iNo != 0)
    {
        iDigit =iNo % 10;
        if(iDigit > iMax)
        {
            iMax=iDigit;
        }
        if(iMax ==9)
        {
            break;
        }
        iNo = iNo / 10;

    }
    return iMax;
}
int main()
{
    int ia=0;
    int iRet =0;

    printf("Enetr the number : ");
    scanf("%d",&ia);

    iRet=MaxDigit(ia);
    printf("%d Is the maximun nuber ",iRet);


    return 0;

}