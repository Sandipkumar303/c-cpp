#include<stdio.h>
void finalsalary(int *slr, int b)
{
    *slr=*slr+b;
}
int main()
{
    int salary=0,bonus=0;
    printf("enter the employee curent salary");
    scanf("%d",&salary);
    printf("enter bonus");
    scanf("%d",&bonus);
    finalsalary(&salary,bonus);
    printf("final salary:%d",salary);
    return 0;
}