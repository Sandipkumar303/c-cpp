#include<stdio.h>
int main()
{
    int amount,note2000,note500,note200,note100,note50,note20,note10,sikka5,sikka2,sikka1;
    printf("enter amount");
    scanf("%d",&amount);
    
    
    if(amount>=2000)
    {
        note2000=amount/2000;
        amount=amount%2000;
    }
    else
    {
        note2000=0;
    }
    if (amount>=500)
    {
        note500=amount/500;
        amount=amount%500;

    }
    else
    {
        note500=0;
    }
    if (amount>=200)
    {
        note200=amount/200;
        amount=amount%200;
    }
    else
    {
      note200=0;
    }
    if (amount>=100)
    {
        note100=amount/100;
        amount=amount%100;
    }
    else
    {
        note100=0;
    }
    if(amount>=50)
    {
        note50=amount/50;
        amount=amount%50;
    }
    else
    {
        note50=0;
    }
    if(amount>=20)
    {
        note50=amount/20;
        amount=amount%20;
    }
    else
    {
        note20=0;
    }
    if(amount>=10)
    {
        note10=amount/10;
        amount=amount%10;
    }
    else
    {
        note10=0;
    }
    if(amount>=5)
    {
        sikka5=amount/5;
        amount=amount%5;
    }
    else
    {
        sikka5=0;
    }
    if(amount>=2)
    {
        sikka2=amount/2;
        amount=amount%2;
    }
    else
    {
        sikka2=0;
    }
    if(amount>=1)
    {
        sikka1=amount/1;
        amount=amount%1;
    }
    else

    {
        sikka1=0;
    }
    printf("note of 2000=%d\n",note2000);
    printf("note of 500=%d\n",note500);
    printf(" note of 200=%d\n",note200);
    printf("note of 100=%d\n",note100);
    printf("note of 50=%d\n",note50);
    printf(" note of 20=%d\n",note20);
    printf("note of 10=%d\n",note10);
    printf("sikka of 5=%d\n",sikka5);
    printf("sikka of 2=%d\n",sikka2);
    printf("sikka of 1=%d\n",sikka1);
    
       
}