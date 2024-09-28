#include<stdio.h>
int main()
{
    int i,sum=0;
    float per,arr[5];
    printf("enter five subjects mark\n");
    
    
    for(i=0;i<=4;i++)
    {
    scanf("%f",&arr[i]);
    sum= sum+arr[i];

    }
    printf("sum=%d\n",sum);
    per=sum/5.0;
    printf("per=%f\n",per);
    
    {
    if(per>=90)
    {
        printf("grade a");
    }
    else if(per>=80)
    {
        printf("grade b");
    }
    }
}