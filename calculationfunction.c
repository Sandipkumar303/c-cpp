#include<stdio.h>
void sum(int a,int b)
{
    printf("addition=%d\n",a+b);

}
void sub(int a, int b)
{
    printf("subtrectaion=%d\n",a*b);
}
void minus(int a,int b)
{
    printf("minus=%d\n",a-b);
}
void div(int a,int b)
{
    printf("division=%d\n",a/b);
}
void main()
{
    int a,b;
    printf("enter value of a-");
    scanf("%d",&a);
    printf("enter value of b-");
    scanf("%d",&b);
    sum(a,b);
    sub(a,b);
    minus(a,b);
    div(a,b);
}