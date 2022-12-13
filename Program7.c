#include<stdio.h>
int mutltiplication(int iX ,int iY)
{ 
int iMult=0;
iMult=iX*iY;

  return iMult;       


}
int main()
{

int ia=0,ib=0,imult=0;

printf("Enter the First number ia :");
scanf("%d",&ia);
printf("Enter the First number ib :");
scanf("%d",&ib);

imult=mutltiplication(ia,ib);
printf(" multiplication of a and b is:%d",imult);
    return 0;
} 