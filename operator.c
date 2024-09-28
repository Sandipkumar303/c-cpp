#include<stdio.h>
int main()
{
    int num;
    printf("enter a number");
    scanf("%d",&num);
    if((num%2==0)&&(num%3==0))
    {
        printf("input number divisible by both");
    }
    else
    {
        printf("input number not divisible by both");
    }
    return 0;
}