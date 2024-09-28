#include<stdio.h>
int main()
{
float phy,che,math,bio,comp,per;
printf("enter five subjects marks");
scanf("%f,%f,%f,%f,%f",&phy,&che,&math,&bio,&comp);
per=(phy+che+math+bio+comp)/5.0;
printf("percentage=%.2f\n",per);
if(per>=90)
{
printf("grade A");
}
else if(per>=80)
{
printf("grade B");
}
else if(per>=70)
{
printf("grade C");
}
else if (per>=60)
{
printf("grade D");
}
else if(per>=40)
{
printf("grade E");
}
else
{
printf("fail");
}



}