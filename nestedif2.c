#include<stdio.h>
void main()
{
int a,b,c;
printf("enter the value of a"); 
scanf("%d",&a);
printf("enter the value of b");
scanf("%d",&b);
printf("enter the value oh c");
scanf("%d",&c);
if(a>b)
{
    if (a>c)
    {
        printf(" a is gretest");
    }
    else
    {
        printf("c is greatest");
    }
    
}
else
{
if(b>c)
{
    printf(" b is greatest ");
}
else
{
    printf("c is greatest");
}

}


}