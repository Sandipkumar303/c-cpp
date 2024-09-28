#include<iostream>
using namespace std;
int main()
{
    int num, n1,n2,n3;
    cout<<"enetr your 3 digite number";
    cin>>num;
     n1=num%10;
     num=num/10;
     n2=num%10;
     num=num/10;
     n3=num%10;
     cout<<n1<<n2<<n3;

}