#include<stdio.h>
int main()
{
   int pow=1,i=1,base,exp;
   printf("enter the base ");
   scanf("%d",&base);
   printf("enter exponent");
   scanf("%d",&exp);
   do
   {
       pow=pow*base;
       i++;
   } 
   
   while(i<=exp);
   printf("%d",pow);

}