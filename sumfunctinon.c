#include<stdio.h>
int sum(int a,int b, int c)

{
    printf("addition=%d\n",a+b+c);
}
double sum(double a,double b)
{
    printf("%f\n",a+b);
}
int main()
{
    
    sum(45.3,86.5);
    sum(56,54,25);
    
}