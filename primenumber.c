#include<stdio.h>
int main()
{
    int a,b,i,num;
    printf("enter value of a");
    scanf("%d",&a);
    printf("enter number of b");
    scanf("%d",&b);
    for(num=a;num<=b;num++)
    {
        for(i=2;i<num;i++)
        {
            if(num%i==0)
            {
                break;
            }
        }
        if(i==num)
        {
            printf("%d\n",num);
        }
    }

    return 0;
}