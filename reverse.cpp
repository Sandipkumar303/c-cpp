#include<iostream>
using namespace std;
int main()
{
    int rem,num,rev=0;
    cout<<"enter a number";
    cin>>num;
    for(rev=0;num!=0;)
    {
        rem=num%10;
        rev=rev*10+rem;
        num=num/10;
    }
    cout<<"after reverse"<<rev;
    return 0;
}