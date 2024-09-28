#include<stdio.h>
int main()
{
    int n;
    printf("enter number");
    scanf("%d",&n);
    switch(n>0)
   { 
        case 1:
        printf( "number is positive");
        break;
        case 0:
        switch(n<0)
       { 
            case 1:
            printf("number is negetive");
            break;
            case 0:
            printf("number is zero");
            break;
        }
    }
    return 0;
}