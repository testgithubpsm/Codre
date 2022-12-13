#include<stdio.h>
int MinDigit(int iNo)
{
    int iMin=9;
    int iDigit =0;

    if(iNo < 0)
    {
        iNo =-iNo;
    }
    while(iNo != 0)
    {
        iDigit =iNo % 10;
        if(iDigit < iMin)
        {
            iMin=iDigit;
        }

        iNo = iNo / 10;

    }
    return iMin;
}
int main()
{
    int ia=0;
    int iRet =0;

    printf("Enetr the number : ");
    scanf("%d",&ia);

    iRet=MinDigit(ia);
    printf("%d Is the minimum number ",iRet);


    return 0;

}