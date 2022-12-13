////////////////////////////////////////////////////////////////////////
//Steps to Follow while Programming//
/////////////////////////////////////////////////////////////////////////
//Step 1  :Understand the problem Statment
//Step 2  :Write the algorithm
//Step 3  :Decide the programming language
//Step 4  : Write the progream
//Step 5  :Test the program
/////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////
//Problem Statment : Write a program of accepting anumber from user and check whether it is divisibla by 5 or not//
//Input :23
//Output : 23 is not divisible by 5

//Input :25
//Output : 25 is divisible by 5

//Input :-20
//Output : -20 is divisible by 5

//Algorithm
/*
Start
accept the number from user as Num
Divide that number by 5 and check the value of remainder 
if remainder is 0,
then display as Num is divisible by 5
otherwise not dividible by 5
End 
*/
////////////////////////////////////////////////////////////////////
//Functoin name : DivisibleByFive
//Discription   : to check the number is Divisible by 5 or not
//Input         : Integer
//Output        : Integer
//Author        : Pradnya Satish Mane(Cogni2108)
//Date          :16/10/2022
///////////////////////////////////////////////////////////////////

#include<stdio.h>
int DivisibleByFive(int inum)
{

int iDiv=0;
iDiv=inum %  5;
if(iDiv % 5==0)
{
return 1;
}
else
{
    return 0;
}
 

}
int main()
{
int ia=0;
int iret=0;

printf("Enter the number ia: ");
scanf("%d",&ia);

iret= DivisibleByFive(ia);
if(iret==1)
{
printf("The number is  divisble by 5\n",ia);
}
else
{
printf("The number is not divisble by 5\n",ia);

}
return 0;

}
