#include<stdio.h>
int main()
{
    char ch;
    int l,w,a,p;
    printf("enter charecter");
    scanf("%c",&ch);
    printf("enter length");
    scanf("%d",&l);
    printf("enter width ");
    scanf("%d",&w);
    
    if(ch=='1')
    {
        a=l*w;
        printf("area=%d",a);
    }
    else if(ch=='2')
    {
        p=2*(l+w);
        printf("parameter=%d",p);
    }
    
    return 0;

}