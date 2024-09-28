#include<iostream>
using namespace std;
int main()
{
  int fact=1,i=1,n;
  cout<<"enter a nuber";
  cin>>n;
  for(fact=1;i<=n;i++)
  {
      fact=fact*i;

  }
  cout<<"factorial="<<fact;
  return 0;
}