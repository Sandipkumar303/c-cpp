#include<iostream>
using namespace std;
int main()
{
    int arr[]={3,5,1,4,7,9};
    int temp;
   
 for(int i=0; i<6; ++i)
 {
    for(int j=i+1; j<6; ++j)
    {
         if (arr[i]>arr[j])
         {
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
             
    }
     
}

 }
  int index=0;
 for(int i=0; i<5; ++i)
 {
index=arr[i+1];
if(index-arr[i]!=1)
{
    cout<<arr[i]+1;
}
 }
 
}
 

