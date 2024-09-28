#include<stdio.h>
int main()
{
    int x[3]={5,6,7};
    int *ptr,i;
    ptr=x;
    for(i=0;i<=2;i++)
    {
    printf("%u\n",ptr);
    ptr++;
    }

    return 0;
}