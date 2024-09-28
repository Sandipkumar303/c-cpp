#include<iostream>
using namespace std;
int main()
{
    int i=10,arr[10];
    cout<<"getting value in arry";
    for(i=10;i>=1;i--)
    {
        cin>>arr[i];
    }
    for(i=10;i>=1;i--)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}