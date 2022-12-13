 #include<stdio.h>
#include<stdbool.h>

bool CheckPefect(int iNo)
{
int iCount=0;
int iSum=0;

for(iCount=1; iCount< (iNo/2); iCount++)
{
    if((iNo % iCount) == 0)
    {
        iSum = iSum +iCount;
    }
}
if(iSum == iNo)
    {
        return true;
    }else
    {
        return false;
    }

}
//6  28 

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