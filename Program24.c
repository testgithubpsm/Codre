#include<stdio.h>

int Display(int iValue)
{
 int iCount =0;
 iCount=1;
 while(iCount <= iValue)
 { 
    printf("Pradnya : %d\n",iCount);
    iCount++;
 }

}
int main()
{
    int iNo=0;

    printf("Enter the value iNo :");
    scanf("%d",&iNo);

  Display(iNo);
  return 0;
}