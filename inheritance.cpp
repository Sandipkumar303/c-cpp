#include<iostream>
using namespace std;
class parent 
{
    public:
    void print()
    {
        cout<<"i am child class";
    }
};
class child:public parent
{
    public:
    void print()
    {
        cout<<"i am base class";
    }
};

int main()
{
    child obj1;
    obj1.print()
    
    return 0;
}