#include<iostream>
using namespace std;
class A
{
    public:
    A(string name,int age, float per)
    {
        cout<<"Hello "<<name<<" "<<age<<" "<<per;
    }
};
int main()
{
    A obj("sandip",52,89.5);
}