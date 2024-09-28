#include<stdio.h>
int sum(int *a,int *b)
{
    return *a+*b;
}
int main()
{
    int a,b,result;
    printf("enter value of a&b");
    scanf("%d%d",&a,&b);
   result=sum(&a,&b);
   printf("%d",result);
}