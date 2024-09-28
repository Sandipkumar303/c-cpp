//c++ program to explain
//multiple inheritance
#include<iostream>
using namespace std;
//first base class
class Vehicle
{
    public:
    Vehicle()
    {
        cout<<"this is a vehicle"<<endl;
    }
};
//second base class
class  FourWheeler
{
    public:
    FourWheeler()
    {
        cout<<"this is a fourwheeler vehicle"<<endl;
    }
};
//sub class derived from two base classes
class Car: public Vehicle, public FourWheeler{
    public:
    Car()
    {
        cout<<"car has 4 wheels"<<endl;
    }
};
//main function
int main()
{
    //creating object of sub class will
    //invoke the constructor of base classes
    Car obj;
    return 0;
}