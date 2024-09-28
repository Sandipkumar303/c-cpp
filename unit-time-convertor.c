#include<stdio.h>
int week,day,hour,minute,second;
int weektoday()
{
    printf("enter the numbere of week");
    scanf("%d",&week);
    day=week*7;
    printf("%d-week=%d--days",week,day);
    return 0;
}
 int daytohour()
{
    printf("enter the of day :");
    scanf("%d",&day);
    hour=day*24;
    printf("%d--day=%d--hour",day,hour);
    return 0;
}
 int hourtominute()
{
    printf("enter the number of hour :");
    scanf("%d",&hour);
    minute=hour*60;
    printf("%d--hour=%d--minute",hour,minute);
}
int minutetosecond()
{
    printf("enter the number of minute :");
    scanf("%d",&minute);
    second=minute*60;
    printf("%d--minute=%d--second",minute, second);
}
int main()
{
    int ch;
    printf("\n1.for week to day :");
    printf("\n2.for day to hour :");
    printf("\n3.for hour to minute :");
    printf("\n4.for minute to second :");
    printf("\nenter the enput :");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1:
        weektoday();
        break;
        case 2:
        daytohour();
        break;
        case 3:
        hourtominute();
        break;
        case 4:
        minutetosecond();
        break;
        default:
        printf("invalide enput");
        break;
    }
    return 0;
}
