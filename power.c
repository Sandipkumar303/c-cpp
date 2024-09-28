#include<stdio.h>
int main()
{
    int pow=1,i=1, base,exp;
    printf("enter base");
    scanf("%d",&base);
    printf("enter exp");
    scanf("%d",&exp);



    for(i=1;i<=exp;i++)
    {
        pow=pow*base;
    }
    printf("%d",pow);

    return 0;
}