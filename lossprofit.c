#include<stdio.h>
void main ()
{
int cp,sp,p,l;
printf("cost price");
scanf("%d",&cp);
printf("selling price");
scanf("%d",&sp);
p=sp-cp;
l=cp-sp;
if(cp<sp)
{
printf("profit=%d",p);
}
else if(sp>cp)
{
printf("loss=%d",l);
}
else
{
printf("no loss no profit" );

}


}