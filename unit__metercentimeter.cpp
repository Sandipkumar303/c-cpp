#include<iostream>
using namespace std;
float cm,m,f;
int metertocentimeter()
{
  cout<<"enter the meter;";
  cin>>m;
  cm=(m*100);
  cout<<"centimeter"<<cm;
  
  return 0;
}
int centimetertometer()
{
    cout<<"enter the centimeter";
    cin>>cm;
    m=cm/100;
    cout<<"meter="<<m;
   return 0;
}
int metertofoot()
{
    cout<<"enter the meter";
    cin>>m;
    f=m/0.3048;
    cout<<"foot="<<f;
    return 0;
}
 int foottometer()
 {
     cout<<"enter the foot";
     cin>>f;
     m=f*0.3048;
     cout<<"meter="<<m;
     return 0;
 }
 int main()
 {
     int ch;
     cout<<"\n1.for meter to centemeter:";
     cout<<"\n2.for centimeter to meter:";
     cout<<"\n3.for meter to foot:";
     cout<<"\n4.for foot to meter:";
     cout<<"\nenter the enput:";
     cin>>ch;
     switch(ch)
     {
         case 1:
         metertocentimeter();
         break;
         case 2:
         centimetertometer();
         break;
         case 3:
         metertofoot();
         break;
         case 4:
         foottometer();
         break;
         default:
         cout<<"invalid inputs";
         break;
     }
     return 0;
 }