#include<iostream>
using namespace std;
int main()
{
    int digit,count;
    cout<<"enter a digit";
    cin>>digit;
    do
    {
        digit=digit/10;
        count++;
    }
    while(digit!=0);
    cout<<"count="<<count;
    
}