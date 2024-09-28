#include<stdio.h>
float m,cm,f;
int metertocentimeter()
{
    printf("enter the meter:");
    scanf("%f",&m);
    cm=m*100;
    printf("%f--meter=%f--centimeter",m,cm);
    return 0;
}
int centimetertometer()
{
    printf("enter the centimeter:");
    scanf("%f",&cm);
    m=cm/100;
    printf("%f--centimeter=%f--meter",cm,m);
    return 0;
}
int metertofoot()
{
    printf("enter the meter:");
    scanf("%f",&m);
    f=m/0.3048;
    printf("%f--meter=%f--foot",m,f);
}
int foottometer()
{
    printf("enter the foot:");
    scanf("%f",&f);
    m=f*0.3048;
    printf("%f--foot=%f--meter",f,m);

}
int main()
{
    int ch;
    printf("\n1.for meter to centimeter :");
    printf("\n2.for centimeter to meter :");
    printf("\n3.for meter to foot :");
    printf("\n4.for foot to meter :");
    printf("\nenter the input :");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1:
        metertocentimeter();
        break;
        case 2:
        centimetertometer();
        break;
        case 3:
        metertofoot();
        break;
        case 4:
        foottometer();
        break;
        default:
        printf("invalid input");
        break;
    }
    return 0;
}