//row 4
//columns 4
/*

* * * *
* * * *
* * * *
* * * *

*/

#include<stdio.h> 

void Display(int iRow, int iCol)
{

int i=0;
int j=0;

if(iRow < 0)
{
    iRow=-iRow;
}
if(iCol < 0)
{
    iCol=-iCol;
}

for(i=1; i<= iRow; i++)
{
    for(j=1;j<=iCol;j++)
    {
        printf("*\t");
    }
    printf("\n");
}
}
int main()
{
    int iValue1 =0,iValue2=0 ;
    printf("Enter the number 1 : ");
    scanf("%d",&iValue1);

    printf("Enter the number 2 : ");
    scanf("%d",&iValue2);

    Display(iValue1,iValue2);

    return 0;
}