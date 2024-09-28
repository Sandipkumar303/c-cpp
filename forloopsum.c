#include<stdio.h>
int main()
{
    int sum=0,n,i=1;
    printf("enter number n");
    scanf("%d",&n);

    for(sum=0;i<=n;i++)
    {
        sum=sum+i;
    }
    printf("%d",sum);
    

    return 0;
}