  #include<stdio.h>

void DisplayTable(int iNo)
{
   int iCount=0;
   printf("______________________");
   printf("Table of %d is :");
    

   for(iCount=1; iCount<=10; iCount++)
    {
        printf("%d\n",iNo*iCount);
    }
      printf("______________________");
}
int main()
{
    int iValue=0,iRet=0;

    printf("Enter the number : \n");
    scanf("%d",&iValue);

    DisplayTable(iValue);

    return 0;
}