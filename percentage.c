#include<stdio.h>
void main()
{
float phy,che,math,bio,comp,per;
printf(" enter five subjet marks");
scanf("%f,%f,%f,%f,%f",&phy,&che,&math,&bio,&comp);

if((phy>=30)&&(che>=30)&&(math>=30)&&(bio>=30)&&(comp>=30))
{per=(phy+che+math+bio+comp)/5.0;
printf("percentage=%.3f\n",per);

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
else if(per>=60)
{
printf("grade D");
}
else if(per>=40)
{
printf("grade E");
}
}
else
{
printf("fail");
}

}