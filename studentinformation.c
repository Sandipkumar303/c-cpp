#include<stdio.h>
#include<string.h>
 struct atudent
 {
     char name[20];
     int  age;
     float per; 
 };
 int main()
 {
     int i;
     struct student s1,s2,s3;
    
     printf("enter the name,age and percentage of student1");
     scanf("%s%d%f",&s1.name,&s1.age,&s1.per);
      printf("enter the name,age and percentage of student2");
     scanf("%s%d%f",&s2.name,&s2.age,&s2.per);
     printf("enter the name ,age and percentage of student3");
     scanf("%s%d%f",&s3.name,&s3.age,&s3.per);
     printf("printing the detail.....\n");
     printf("%s%d%f\n",s1.name,s1.age,s1.per);
     printf("%s%d%f\n",s2.name,s2.age,s2.per);
     printf("%s%d%f\n",s3.name,s3.age,s3.per);
     return 0;
 }