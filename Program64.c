#include<stdio.h>

int  MaxDigit(int iNo)
{
    int iDigit=0;
    int iMax=0;


    for(iMax=0; iNo != 0; iNo= iNo / 10)
    {
        iDigit =iNo % 10;
        if(iDigit > iMax)
        {
            iMax = iDigit; 
        }
        iNo =iNo / 10;  
    }
    return iMax;
}



int main()
{
    int ia=0;
    int  iRet=0;
    printf("Enter the number : ");
    scanf("%d",&ia);

    iRet=MaxDigit(ia);
    
    printf("%d : Largest Digit ",iRet);
return 0;

}