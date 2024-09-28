#include<iostream>
#include<string>
using namespace std;
int main()
{
 int r;  //r for roll number
 string name,name1,name2;
 cout<<"enter the student name :-";
 getline(cin,name);
 cout<<"enter the  father's name :-";
 getline(cin,name1);
 cout<<"enter the mother's name :-";
 getline(cin,name2);
 cout<<"enter the roll number :-";
 cin>>r;
 cout<<"      STUDENT NMAE  :-"<<name<<endl;
 cout<<"      FATHER'S NAME :-"<<name1<<endl;
 cout<<"      MOTHER'S NAME :-"<<name2<<endl;
 cout<<"      ROLL NO       :-"<<r<<endl;
}