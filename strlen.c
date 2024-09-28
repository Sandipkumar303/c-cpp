#include<stdio.h>
#include<string.h>
int main()
{
 char s1[20]={'s','a','n','d','i','p','\0'};
 char s2[20]="sandip";
 char s3[20];
 printf("enter the length of string\n");
 gets(s3);
 printf("length ofs1=%d\n",strlen(s1));
 printf("length of s2=%d\n",strlen(s2));
 printf("length of s3=%d\n",strlen(s3));

 return 0;


}