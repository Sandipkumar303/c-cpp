#include<stdio.h>
int main()
{
    int n,i=10;
    printf("enter the value of n");
    scanf("%d",&n);
    while(n<=i)
    {
        printf("%d\n",i);
        i--;
    }
}