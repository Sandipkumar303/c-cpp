#include<iostream>
using namespace std;
int main()
{
    int arr[]={3,5,1,4,7};
    int temp;
   
 for(int i=0; i<5; ++i)
 {
    for(int j=i+1; j<5; ++j)
    {
         if (arr[i]>arr[j])
         {
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
             
    }
     
}
// cout<<arr[i];
 }
 int index;
 for(int i=0; i<5; ++i)
 
 {
    if(arr[i+1]-arr[i]!=1)
    {
      index=arr[i+1]-1;
    }
 }
}
 

