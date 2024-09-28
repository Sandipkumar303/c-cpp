#include<iostream>
using namespace std;
int main()
{
    int note[10]={2000,500,200,100,50,20,10,5,2,1};
    int amount,i,number;
    cout<<"\nplese enter the amount";
    cin>>amount;
    for(i=0;i<10;i++)
    {
    cout<<note[i]<<"note is="<<amount/note[i]<<endl;
    amount=amount%note[i];
    }
}