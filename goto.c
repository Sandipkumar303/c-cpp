#include<stdio.h>
int main()
{
    int n,i;
    printf("enter number");
    scanf("%d",&n);
    for(i=1;i<n;i++)
   {
    if(i==3)
    goto there;
     printf("%d\n",i);


   }
   there:
   printf("two");

    return 0;
}