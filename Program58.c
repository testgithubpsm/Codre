#include<stdio.h>
int Reverse(int iNo)
{
    int iDigit=0;
    int iRev=0;

    if(iNo < 0)
    {
        iNo=-iNo;
    }
    if(iNo == 0)
    {
        return iRev;
    }
    while(iNo !=0)
    {
        iDigit= iNo % 10;
        iRev=((iRev*10)+ iDigit);
        iNo=iNo / 10;
    }
    return iRev;
}


int main()
{   int ia=0;
    int iRet=0;
    printf("Enter the number : ");
    scanf("%d",&ia);

    iRet=Reverse(ia);
    printf("The Reverse number of given Number is : %d",iRet);

    return 0;
}
