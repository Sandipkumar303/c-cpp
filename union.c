#include<stdio.h>
#include<string.h>
union get
{
    int i;
    float f;
    char str[20];
};
int main()
{
    union get data;
    data.i=10;
    data.f=220.5;
    strcpy(data.str,"c programming");
    printf("data.i:%d\n",data.i);
    printf("data.f:%f\n",data.f);
    printf("data.str:%s\n",data.str);

    return 0;
}