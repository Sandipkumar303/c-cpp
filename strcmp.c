#include<stdio.h>
#include<string.h>
int main()
{
    char leftstr[]="sandip";
    char rightstr[]="sandi";
    int res=strcmp(leftstr,rightstr);
    if(res==0)
    
    printf("string are equal");
    else
    printf("string are unequal");

    return 0;
}