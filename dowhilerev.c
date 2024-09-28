#include<stdio.h>
int main()
{
    int num,rev=0,rem;
    printf("enter nuber num");
    scanf("%d",&num);
    do
    {
        rem=num%10;
        rev=rev*10+rem;
        num=num/10;
    }
    while(num!=0);
    printf("after revers%d",rev);


    return 0;
}