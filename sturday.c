#include<stdio.h>
int main()
{
    float phy,che,math,hindi,eng,per;
    printf("enter five subject mark");
    scanf("%f,%f,%f,%f,%f",&phy,&che,&math,&hindi,&eng);
    per=(phy+che+math+hindi+eng)/5.0;
    printf("percentage=%.2f\n",per);
    if(per>=90)
    {
        printf("first rank");
    }
    else if(per>=60)
    {
        printf("second rank");
    }
    else if(per>=30)
    {
        printf("pass");
    }
    else
    {
        printf("fail");
    }
    
    return 0;
}