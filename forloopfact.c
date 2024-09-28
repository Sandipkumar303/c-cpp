#include<stdio.h>
int main()
{
    int fact=1,n,i=1;
    printf("enter number n");
    scanf("%d",&n);

    for(fact=1;i<=n;i++)
    {
        fact=fact*i;
    }
    printf("factorial=%d",fact);


    return 0;
}