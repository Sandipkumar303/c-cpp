#include<iostream>
using namespace std;
class Box {
    private:
    string name="sandip";
    friend void print(Box b);

};
void print(Box b)
{
    b.name="hozaifa";
    cout<<"my name is "<<b.name;
}
int main()
{
    Box b;
    print(b);
}