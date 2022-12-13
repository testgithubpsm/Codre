//write program to check the number is divisible by 5 or not

//steps
//1. undrestand the problem
//2. write the algorithm
//3. decide the language of programing
//4. write the program
//5. check the test cases

//problem statment :accept the number from user and vheck wheir it is divisible by 5 or not
//Input : 23
//Output : number is not divisible by 5
//Input : 25
//Output : nubmer is divisible by five

//Algorithm
/*
Start 
Accept the number from user and check whether it is divisible by five or not 
check the remainder if it is 0 the display as nuber is divisible by five otherwise nuber is not divisible by five
end
*/

#include<stdio.h>
#include<stdbool.h>
//////////////////////////////////////////////////////////////////////////////
//Function name : DivisibleByFive
//Discription   : to check number is divisible by five or not
//Input         : Integer
//output        : Integer
//Author        : Pradnya Satish Mane(wipro 2108)
//Date          : 17/10/2022

int DivisibleByFive(int inum)
{
    int idiv=0;
    idiv = inum% 5;
    if(idiv==0)
    {
        return true;
    }else 
    {
        return false;

    }

}
int main()
{
int ia=0;
int iret=0;
printf("Enter the number a: ");
scanf("%d",&ia);

iret=DivisibleByFive(ia);

if(iret==true)
{

    printf("Number is divisible by five");
}else 
{
printf("Number is not  divisible by five");

}

    return 0;
}