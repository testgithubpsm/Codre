//accept the number wheeir it is perfect or not 19/10/2022

#include<stdio.h>
#include<stdbool.h>

int SumFactors(int iNo)
{
int iCount=0;
int iSum=0;

for(iCount=1; iCount<= (iNo/2); iCount++)
{
    if((iNo % iCount) == 0)
    {
        iSum = iSum +iCount;
    }
}
    return iSum;

}
//6  28 
bool CheckPefect(int iData)
{
    
    int iAns=0;
    iAns=SumFactors(iData);
    if(iAns == iData)
    {
        return true;
    }else
    {
        return false;
    }
    
}

int main()
{
    int iValue =0;
    bool bRet = false;

    printf("Enter the number : \n");
    scanf("%d",&iValue);

    bRet= CheckPefect(iValue);

    if(bRet == true)
    {
        printf("%d is perfect number\n",iValue);
    }else 
    {
        printf("%d is not perfect number\n",iValue);
    }

    
    return 0;
}