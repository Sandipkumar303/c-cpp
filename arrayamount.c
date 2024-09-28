#include<stdio.h>
int main()
{
int acc;
char name;
int note[]={2000,500,200,100,50,20,10,5,2,1};
int amount,i,number;
printf("enter a name-");
scanf("%c",&name);
printf("emter acount number-");
scanf("%d",&acc);
if((name=='s')&&(acc=1234567890))

{
  
    printf("enter the amount");
    scanf("%d",&amount);

  for(i=0;i<10;i++)
  {
  
    
    number=amount/note[i];
    amount=amount%note[i];
   
    printf("note of%d=%d\n",note[i],number);
    
  }
  
}
return 0;
}