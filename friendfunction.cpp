#include<iostream>
using namespace std;
class Employee
{
    private:
    int salary=10000,id;
    public:
    void set(string name)
    {
     cout<<"name"<<name<<endl;
    }
    void set(double s)
    {
        salary=s;
        cout<<"salary is="<<salary;
    }
    void set(int x)
    {
     id=x;
     cout<<"employee id"<<id;
    }
    
};
int main()

{
   Employee obj,obj1,obj2;
   obj.set("sandip");
   obj1.set(500000.00);
   obj2.set(25);
    return 0;
}