#include<stdio.h>
int main()
{
    int i,n;
    printf("enter number");
    scanf("%d",&n);
    for(i=1;i<=10;i++)
    {
    
    if(i==7)
       break;
    printf("%d\n",i);
    }
    return 0;   
}