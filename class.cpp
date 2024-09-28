#include<iostream>
#include<string>
using namespace std;
class Student{
    public:
    string name;
    void print()
    {
        cout<<"my name is "<<name<<endl;
    }
};
int main()
{
    Student s1;
    s1.name="sandip";
    s1.print();
}