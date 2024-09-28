#include<stdio.h>
#include<string.h>
int main()
{
    char dest[50]="this is an  ";
    char src[50]="example";
    printf("enter the input=");

    strcat(dest,src);
    puts(dest);

    return 0;
}