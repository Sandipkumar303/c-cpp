#include<stdio.h>
int main()
{
    int n,i;
    printf("enter number");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(i==10)
        continue;
        printf("%d\n",i);
    }

    return 0;
}