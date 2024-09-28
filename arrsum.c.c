#include<stdio.h>
int main()
{
    int i,sum=0,arr[5];
    printf("enter value\n");
    for(i=0;i<=4;i++)
    {
        scanf("%d",&arr[i]);
    }
    for (i = 0; i <=4; i++)
       {
           sum=(sum+arr[i]);
       }

       printf("%d",sum);
    return 0;
}