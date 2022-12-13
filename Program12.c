//Question : Write the program to check the number is divisible by 3 and 5

//stepsto follow :
// 1. Understand the probem 
//2.write the algorithm
//3.decide the programing language
//4.write the program
//5.test the code

//problem : to check the number is divisible by 3 and 5
//Input : 9
//Output : number is divisible not  by 3 and 5
// Input : 20
//output : number is divisibl by 3 and 5

//algorith :
/*
Start
 accept the number form user
 check is it divisible by 3 and 5 or not AND ckeck remainder
if the value of remender is 0 display number is divisible by 5 otherwise display number is not divisible by 3 and 5

*/






#include<stdio.h>
#include<stdbool.h>
 //Function name :DivisibleByFive
 //Discription : Tocheck the number is divicible by five or not
 //Input : Integer
 //Output : Integer
 //Author : Pradnya Satish Mane (cogni2108)
 //Date   : 17/10/2022
bool DivisibleByThreeAndFive(int num)
{
    int Ans1=0;
    int Ans2=0;

    Ans1=num % 3;
    Ans2=num % 5;

    if((Ans1==0) && (Ans2==0))
    {
        return 0;

    }else 
    {

        return 1;
    }
}
int main()
{
int a=0;
int Ret=0;
printf("Enter the number a:");
scanf("%d",&a);

Ret=DivisibleByThreeAndFive(a);

if(Ret==0)
{
    printf("The number is divisible by 3 and 5");
}else 
{
    printf("The number is not divisible by 3nad 5");
}
return 0;

}