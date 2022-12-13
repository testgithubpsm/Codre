 #include<stdio.h>
 #include<stdbool.h>

 bool DivisibilityByThreeAndFive(int inum)
 {
    int idiv=0;
    if((inum % 3==0) && (inum % 5==0))
    {
        return 0;
    }else 
    {
        return 1;
   }

 }
 int main()
 {
    int ia=0;
    int iret=0;
    printf("Enter the number a: ");
    scanf("%d",&ia);

    iret=DivisibilityByThreeAndFive(ia);

    if(iret==0)
    {
        printf("The number is divisible by 3 nd 5");
    }else 
    {
        printf("The number is not  divisible by 3 nd 5");
    }

return 0;
 }