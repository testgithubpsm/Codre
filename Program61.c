#include<stdio.h>
#include<stdbool.h>
int Reverse(int iNo)
{
    int iDigit=0;
    int iRev=0;

    if(iNo<0)
    {
        iNo =-iNo;
    }

    while(iNo != 0)
    {
        iDigit=iNo % 10;
        iRev=((iRev * 10 ) + iDigit);
        iNo =iNo / 10;

    }
    return iRev;
}

bool CheckPallindrom(int iData)
{
    int iReverse=0;
    iReverse=Reverse(iData);
    return (iReverse == iData);
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