#include<stdio.h>
#include<string.h>
int main()
{
    char s1[20];
    char sc[20];
    printf("copy the string");
    gets(s1);
    strcpy(sc,s1);
    puts(sc);

    return 0;
}