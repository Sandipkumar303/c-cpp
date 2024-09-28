#include<stdio.h>
int main()
{
    int digit,count;
    printf("enter digit");
    scanf("%d",&digit);
    do
    {
     digit=digit/10;
     count++;
    }
    while(digit!=0);
    printf("%d",count);   
    
    return 0;
}
