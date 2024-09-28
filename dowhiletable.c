#include<stdio.h>
int main()
{
      int num,i=1;
    printf("enter number ");
    scanf("%d",&num);
    do
    {
        num=num*i;
        i++;
    }
    while(i<=10);
    printf("table %d\n",num);

    return 0;
}