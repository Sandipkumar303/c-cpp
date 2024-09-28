#include<stdio.h>
#include<string.h>
struct student{
    char name[20];
    int class ,age;
    float per;
};
int main()
{
    int i;
    struct student s[20];
    for(i=0;i<5;i++)
    {
        printf("enter name of student:");
        scanf("%s",&s[i].name);
        printf("enter class of student:\n");
        scanf("%d",&s[i].class);
        printf("enter age of student:\n");
        scanf("%d",&s[i].age);
        printf("percentage of student:\n");
        scanf("%f",&s[i].per);
    }
    for(i=0;i<5;i++)
    {
        printf("name=%s\n",s[i].name);
        printf("class=%d\n",s[i].class);
        printf("age=%d\n",s[i].age);
        printf("percentage=%f\n",s[i].per);
    }

    return 0;
}