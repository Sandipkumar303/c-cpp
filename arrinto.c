#include<stdio.h>
int main()
{
    int i,mul=1,arr[5];
    printf("enter value\n");
    for(i=0;i<=4;i++)
    {
      scanf("%d",&arr[i]);
    }
    for(i=0;i<=4;i++)
    {
        mul=(mul*arr[i]);
    }
    printf("%d",mul);
    return 0;
}