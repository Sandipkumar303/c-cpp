#include<stdio.h>
int main()
{
    int i=10,arr[10];
    printf("getting value in array");
    
    
    for(i=10;i>=1;i--)
    {
        scanf("%d\n",&arr[i]);
    }

    for(i=10;i>=1;i--)
    {
    printf("%d\n",i);
    }

    return 0;
}