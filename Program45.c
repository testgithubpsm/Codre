#include<stdio.h>

int Display(int iNum)
{
iCount=0;
for(iCount=1; iCount<=(iNum/2); iCount=iCount+2)
{
    printf("%d\n",iCount);
}

}
 
int main()
{

    int ia=0;

    printf("Enter the number : ");
    scanf("%d",&ia);

    Diplay(ia);




    return 0;
}