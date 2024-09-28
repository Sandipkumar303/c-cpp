#include<iostream>
using namespace std;
void totalnoteof(int amount)
{
    int note[10]={2000,500,200,100,50,20,10,5,2,1};
    int i,number;
    amount=amount;
    for(i=0;i<10;i++)
    {
        cout<<note[i]<<"note is="<<amount/ note[i]<<endl;
        amount=amount%note[i];
    }
}
int main()
{
    int amount;
    cout<<"\nenter  the amount" <<endl;
    cin>>amount;

    totalnoteof(amount);
    return 0; 
}