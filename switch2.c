h#include<stdio.h>
int main()
{
    int num;
    printf("enter a number ");
    scanf("%d",&num);

    switch(num%2==0)
    {
        case 1:
        printf("input number is even");
       break;
      case 0:
      printf("input number is odd");
      break;
    }
    return 0;
}