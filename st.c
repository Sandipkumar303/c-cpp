#include<stdio.h>
#include<stdio.h>
struct customer{
    char name;
    int acc;
       
};
int main()
{
    struct customer c[20];int
     note[]={2000,500,200,100,50,20,10,5,2,1};
     char name;
     int acc;
    int amount,i,number;
    printf("enter customer name");
    scanf("%s",&c[i].name);
    printf("enter the account number ");
    scanf("%d",&c[i].acc);
    
        printf("enter the amount");
    scanf("%d",&amount);
    for(i=0;i<=10;i++)
    {
        
    number=amount/note[i];
    amount=amount%note[i];
   
    printf("note of%d=%d\n",note[i],number);
    }
    

    return 0;
}