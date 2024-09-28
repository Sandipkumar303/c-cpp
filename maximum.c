#include<stdio.h>
void max(int a,int b,int c)
{
    int d;
    d=(a>b)&&(a>c)?a:(b>c)?b:c;
    printf("maximum=%d",d);
}
int main()
{
    int a,b,c;
    printf("enter the value of a=");
    scanf("%d",&a);
    printf("enter the value of b=");
    scanf("%d",&b);
    printf("enter the value of c=");
    scanf("%d",&c);

    max(a,b,c);
}