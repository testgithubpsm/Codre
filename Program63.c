#include<stdio.h>
#include<stdbool.h>
bool CheckPallindrom(int iNo)
{
    int iDigit=0;
    int iRev = 0;
    int Temp =iNo;

    for(iRev=0; iNo != 0; iNo= iNo / 10)
    {
        iDigit =iNo % 10;
        iRev=((iRev*10)+ iDigit);
    }if(iRev == Temp)
    {
        return true;
    }else
    {
        return false;
    }

}



int main()
{
    int ia=0;
    bool iRet=false;
    printf("Enter the number : ");
    scanf("%d",&ia);

    iRet=CheckPallindrom(ia);
    if(iRet == true)
    {
        printf(" % d is a pallindrom number ".iRet);
    }else
    {
      printf("%d is not a pallindrom number ",iRet);  
    }

return 0;

}