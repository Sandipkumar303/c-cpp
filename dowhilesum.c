#include<stdio.h>
int main()
{
    int i=1,sum=1;
    
    do
    {
        sum=sum*i;
        i++;
    }
    while(i<=10);

    printf("%d",sum);

    return 0;
}