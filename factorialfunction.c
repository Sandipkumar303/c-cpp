#include<stdio.h>
int factorial(int n)
{
    int fact=1,i=1;
    while(i<=n)
    {
        fact=fact*i;
        i++;
    }
    printf("factorial=%d",fact);
}
int main()
{
    int n;
    printf("enter a number");
    scanf("%d",&n);
    factorial(n);
    return 0;
    }