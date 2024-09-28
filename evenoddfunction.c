#include<stdio.h>

void eo(int n)
{
    if(n%2==0)
    printf("enter number is even=%d",n);
    else
    printf("enter nuber is odd=%d",n);
    
}
int main()
{
    int n;
    printf("enter a number");
    scanf("%d",&n);
    eo(n);
    
    return 0;
}