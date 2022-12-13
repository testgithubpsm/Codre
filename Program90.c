// input 4 
// display 1 2 3 4

#include<stdio.h>
void Display(int iNo)
{

int iCnt=0;

for(iCnt=iNo; iCnt<=iNo; iCnt--)
{
    printf("%d\n",iCnt);
}
printf("\n");
}
int main()
{
    int iValue=0;
    printf("Enter the number : ");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}