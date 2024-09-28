#include<stdio.h>
void main()
{
int cp,sp,p,l;
printf("inter cost price ");
scanf("%d",&cp);
printf("enter sell price ");
scanf("%d",&sp);

p=sp-cp;
l=cp-sp;
if(cp<sp)
{
printf("profit=%d",p);
}
else
{
printf("loss=%d",l);
}







}