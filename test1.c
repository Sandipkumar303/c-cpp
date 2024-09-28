#include<stdio.h>
void main()
  
 {
    float phy,che,math,eng,hindi,per;
    printf("enter five subject marks");
    scanf("%f,%f,%f,%f,%f",&phy,&che,&math,&eng,&hindi);
    per=(phy+che+math+eng+hindi)/5.0;
    printf("percentage=%.2f\n",per);
  
  if(per>=90)
  {
    printf("grade a");
 }
 
 else if(per>=80)
 {
    printf("grade b");
 }
 else
 {
    printf("pass");
 }


 }