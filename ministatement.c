#include<stdio.h>
int menu();
void credit();
void detail();
float amount,totalamount=1000,creditamount=0;
void main()
{
    while(1)
    {
        switch(menu())
    {
        case 1:
        credit();
        break;
        case 2:
        detail();
        break;
    }

}
void credit()
{
    printf("enter the credit amount");
    scanf("%f",amount);
    totalamount=totalamount+amount;
}