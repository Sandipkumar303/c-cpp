#include<stdio.h>
void revers(int n)
{
 int rev=0,rem;
 for(rev=0;n!=0;)
 {
     rem=n%10;
     rev=rev*10+rem;
     n=n/10;
 }
 printf("after revers=%d",rev);
}
int main()
{
    int n;
    printf("enter number-");
    scanf("%d",&n);
    revers(n);
    return 0;
}