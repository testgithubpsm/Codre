//Write the program , take any number form user and check is it divisible by 5 or not

//step  1:undrestand the problem statment
//step  2:write the algorthum
 //step 3:decide the prograining language
 //step 4:write the progrm
 //step 5:test the test cases provoided

 //problem statment : accept number fom user and check wheir it is divisible by 5 or not
 //Input  :  23
 //Output :not divisible by 5
 //Input  :  25
 //Output : divisible by 5

 //Algorithm
 
 /*
 Start
 accept the number form user
 check is it divisible by 5 or not AND ckeck remainder
if the value of remender is 0 display number is divisible by 5 otherwise display number is not divisible by 5

End 
 */

 //Function name :DivisibleByFive
 //Discription : Tocheck the number is divicible by five or not
 //Input : Integer
 //Output : Integer
 //Author : Pradnya Satish Mane (cogni2108)
 //Date   : 17/10/2022

 #include<stdio.h>
 int DivisibleByFive(int num)
 {
     int div=0;
     div=num % 5;
     if(div != 0)
    {
        return 0;
     }else
     {
        return 1 ;
     }

 }
 int main()
 {
    int a=0;
    int ret=0;
    printf("Enter the number a :");
    scanf("%d",&a);

    ret=DivisibleByFive(a);
    if(ret !=0)
    {
        printf("number is  divisible by 5");

    }else
    {
        printf("number is not divisible by 5");

    }
    return 0;

}