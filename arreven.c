#include<stdio.h>
int  main()
{
    int i,arr[5];
    printf("getting value in array");
    for(i=0;i<=4;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<=4;i++)
    {
        if(arr[i]%2==0)
        {
        printf("%d\n",arr[i]);
        }
    }
    return 0;
}