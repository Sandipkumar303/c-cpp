+#include<stdio.h>
int main()
{
    char ch;
    int num1,num2, sum,minus,into,divide,reminder;
    printf("enter value of ch ");
    scanf("%c",&ch);

    printf("enter frist number");
    scanf("%d",&num1);
    printf("enter second number");
    scanf("%d",&num2);
    

    
    if(ch=='1')
    {
        sum=num1+num2;
        printf("%d",sum);
    }
     else if(ch=='2')
    {
        minus=num1-num2;
        printf("%d",minus);
    }
    else if(ch=='3')
    {
         into=num1*num2;
        printf("%d",into);
    }
    else if(ch=='4')
    {
        divide=num1/num2;
        printf("divide=%d",divide);
    }
    else if(ch=='5')
    {
        reminder=num1%num2;
        printf("reminder=%d",reminder);
    }
    
    

    return 0;
}