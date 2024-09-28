#include<stdio.h>
int main()
{
    int i,arr[5];
    printf("getting value in array");
    for(i=0;i<=4;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("printing  element\n");
    for(i=0;i<=4;i++)
    {
        if(arr[i]>0)
        {

            printf("%d\n",arr[i]);
        }
        
        
    }
}