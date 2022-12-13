#include<stdio.h>

int Display(int iValue)
{
 int iCount =0;
 for(iCount=1; iCount<= iValue; iCount++)
 {
    printf("Pradnya : %d\n",iCount);
 }

}
int main()
{
    int iNo=0;

    printf("Enter the value iNo:");
    scanf("%d",&iNo);
  Display(iNo);
 return 0;
}