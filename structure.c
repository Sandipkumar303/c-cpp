#include<stdio.h>
#include<string.h>

struct student{
    char name[20];
    int age;
    float per;
};
int main()
{
    struct student s1,s2;
    
    s1. age=21;
    s1. per=76;
    printf("printting s1.name");
    scanf("%s",&s1.name);
    s2. age=23;
    s2. per=79;
    printf("printting s2.name");
    scanf("%s",&s2.name);

    printf("s1 name=%s\n",s1.name);
    printf("s1 age=%d\n",s1.age);
    printf("s1 per=%f\n",s1.per);
    printf("s2 name=%s\n",s2.name);
    printf("s2 age=%d\n",s2.age);
    printf("s2 per=%f\n",s2.per);

    return 0;
}