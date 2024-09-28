#include<stdio.h>
int main ()
{
    float phy ,che,math,bio,comp,per;
    printf(" enter five subject mark ");
    scanf("%f,%f,%f,%f,%f",&phy,&che,&math,&bio,&comp);
    per=(phy+che+math+bio+comp)/5.0;
    printf("percentage=%.2f\n",per);
    if (per>=90)
    {
        printf("grade a");
    }
    else if (per>=80)
    {
        printf("grade b");
    }
    else if (per>=70)
    {
        printf("grade c");
    }
    else if (per>=60)
    {
        printf("grade d");
    }
    else if(per>=40)
    {
        printf("grade e");
    }
    else
    {
        printf("fail");
    }
    
return 0;

}