#include<stdio.h>
int menu();
void debit();
void credit();
void detail();
float amount,avlaibleamount=1000,creditamount=0,debitamount=0;
void main()
{
    while(1);
    {
        //clrscr();
        switch(menu())
        {
            case 1:
        debit();
        if(amount<avlaibleamount)
        avlaibleamount=avlaibleamount-amount;
        break;
        case 2:
        credit();
        break;
        case 3:
        detail();
        break;
        case 4:
        }
    }
}
void credit()
{  
    printf("enter the amount you want to credit");
    scanf("%f",&amount);
    avlaibleamount=avlaibleamount+amount;
    printf("%d",avlaibleamount);
}
void debit()
{
    printf("enter the amount you want to debit");
    scanf("%f",&amount);
    if(amount<=avlaibleamount)
    {
        avlaibleamount=avlaibleamount-amount;
    }
    else{
        printf("less amount not possible");
    }
}
void detail()
{
    printf("avlaible amount=%f\n",avlaibleamount);
    printf("credited with=%f\n",creditamount);
    printf("debited with=%f\n",debitamount);
    
}