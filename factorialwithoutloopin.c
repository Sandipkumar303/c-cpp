#include<stdio.h>
void factorial(int n)
{
    int fact=1;
if(n>0)
{
    int fact,n;
    fact=fact*n;
    n--;
}
printf("%d",fact);
}
int main()
{
    int n;
    printf("enter anumber");
    scanf("%d",&n);
    factorial(n);
    return 0;
}