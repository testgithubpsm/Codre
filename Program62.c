#include<stdio.h>
#include<stdbool.h>
int CheckPallindrom(int iNo)
{
    int iDigit=0;
    int iRev=0;
    int iTemp= iNo;

    while(iNo !=0 )
    {
    iDigit = iNo % 10;
    iRev=((iRev*10) + iDigit);
    iNo = iNo/10;
    }
    if(iRev == iTemp)
    {
        return true;
    }else{
        return false;
    }
}




int main()
{
    int ia=0;
    bool bRet=false;
    printf("Enetr the value : ");
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