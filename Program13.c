#include<stdio.h>
#include<stdbool.h>
bool DivisibleByThreeAndFive(int num)
{

if(num % 3 ==0)
{
    if(num % 5==0)
    {
        return true;
    }else 
    {
        return false;
    }
}else 
    {
    return false;
    }

}
int main()
{

    int a=0;
    bool Ret=false;

    printf("Enter the number a: ");
    scanf("%d",&a);

    Ret=DivisibleByThreeAndFive( a);

    if(Ret==true)
    {
printf("The number is divisible by 3 and 5");
    }else 
    {
        printf("The number is not divisible by 3 and 5");
    }
 
 return 0;   

}