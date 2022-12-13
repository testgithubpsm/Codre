//4
// A B C D 
#include<stdio.h>
//ASCII american standerd code for imformation interchnge

void Display(int iNo)
{

int iCnt=0;
char ch ='A';

if(iNo < 0)
{
    iNo = -iNo;
}
for(iCnt=1; iCnt <=iNo; iCnt++, ch++)
{
    printf("%c\t",ch);
    ch++;
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