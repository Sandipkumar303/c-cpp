#include<iostream>
using namespace std;
class Geeks
{
  public:
  int id;

  //default constructor
  Geeks()
  {
      cout<<"default constructor called"<<endl;
      id=-1;
  }
  //parameterized constructor
 Geeks(int x)
 {
     cout<<"parameterized constructor called"<<endl;
     id=x;
 }
};
int main()
{
    //obj1 will call default constructor
    Geeks obj1;
    cout<<"Geeks id is :"<<obj1.id<<endl;
    //obj1 will call parameterized constructor
    Geeks obj2(21);
    cout<<"Geeks id is :"<<obj2.id<<endl;
    return 0;
}