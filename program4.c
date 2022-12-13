#include<stdio.h>
int addition(int iX,int iY)
{
int iadd=0;
iadd=iX+iY;
return iadd;


}
int main()
{

int ia=0,ib=0,isum=0;
printf("Enter the First number ia:");
scanf("%d",&ia);

printf("Enter the First number ib:");
scanf("%d",&ib);

isum=addition(ia,ib);

printf("sum of a and b is %d",isum);
return 0;

}