#include<stdio.h>
#include<string.h>
int main()
{
    char s[20];
    printf("uppercase of string:");
    gets(s);
    strupr(s);
    puts(s);

    return 0;
}