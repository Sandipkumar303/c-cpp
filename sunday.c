#include<stdio.h>
int main()
{
    int   n=6 ,fact=1,i=1;

    while(i<=n)
    {
        fact=fact*i;
        i++;
    }
    printf("%d",fact);
    
    
        return 0;
}