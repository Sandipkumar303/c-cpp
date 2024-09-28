#include<stdio.h>
int main()
{
    int i=1,num ,t;
    printf("enter number");
    scanf("%d",&num);
    while(i<=10)
    {
       t= num*i;
        ++i;
    printf("%d\n",t);
    }

    return 0;
}
