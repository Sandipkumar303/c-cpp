#include<stdio.h>
#include<string.h>
int main()
{
    char s[20];
    printf("lowercase of string:");
    gets(s);
    strlwr(s);
    puts(s);
}