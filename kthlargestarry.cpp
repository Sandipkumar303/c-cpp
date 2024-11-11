#include<iostream>
using namespace std;
int main()
{
   int s[]={20,12,25,33,41};
   int k;
   cout<<"enter kth value";
   cin>>k;
   int temp;
   for(int i=0; i<5; ++i)
 {
    for(int j=i+1; j<5; ++j)
   
         if (s[i]<s[j])
         {
            temp=s[i];
            s[i]=s[j];
            s[j]=temp;
             
    }
    
 }
 for(int i=0; i<k; ++i)
 {
cout<<s[k-1];
break;
 }
 
}