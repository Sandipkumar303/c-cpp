#include<iostream>
using namespace std;
//function overloading
int sum(int a,int b,int c)
{
    return a+b+c;
}
double sum(double a,double b)
{
    return a+b;
}
int main()
{
    cout<<sum(20,30)<<endl;
    cout<<sum(30.5,52.4)<<endl;
    cout<<sum(20,65,35)<<endl;
}