#include<stdio.h>
int main()
{
    int   n, i=1,sum=1;
    printf("natural no n");
    scanf("%d",&n);

    while (i<=n)
    {
        sum=sum*i;
        i++;
    }
    printf("%d",sum);
}