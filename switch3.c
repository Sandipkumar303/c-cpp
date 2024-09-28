#include<stdio.h>
int main()
{
    char op;
    float num1,num2,result=0.0f;
    printf("enter number");
    scanf("%f",&num1);
    printf("enter number");
    scanf("%f",&num2);
    printf("welcome  to simple calculater\n ");
    printf("enter[num1][+-*/][num2]\n");
    scanf("%f%c%f",&num1,&op,&num2);
    switch(op)
    {
        case '+':
        result=num1+num2;
        break;
        case'-':
        result=num1-num2;
        break;
        case'*':
        result=num1*num2;
        break;
        case'/':
        result=num1/num2;
        break;
        default:
        printf("invalid operator");
    }
    printf("%.2f,%c,%.2f=%.2f",num1,op,num2,result);
    return 0;

}