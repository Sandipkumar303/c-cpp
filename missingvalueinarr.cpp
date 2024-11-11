#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,4,5};
    int  n=5,sum;
    sum=n*(n+1)/2;
    int sumto=0;
    for(int i=0; i<4; ++i)
    {
     sumto=sumto+arr[i];
    }
    int mis_num;
    mis_num=sum-sumto;
    cout<<mis_num;
}
