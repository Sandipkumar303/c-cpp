#include<iostream>
#include<string>
using namespace std;
class Elebill
{
 public:
 int cur_unit,pre_unit,amount,unit;
 public:
 void printUnit();
 void printBill();
};
void Elebill::printUnit()
{
    cout<<"enter previous unit:";
    cin>>pre_unit;
    cout<<"enter the current unit:";
    cin>>cur_unit;
    unit=cur_unit-pre_unit;
    cout<<"unit of this month:"<<unit;
}
 void Elebill::printBill()
  {
        unit=(cur_unit-pre_unit);
        cout<<"unit of this month:"<<unit;
         if(unit>0 && unit<=100)
         {
             amount=unit*1;
         }
         else if(unit>100 && unit<=200)
         {
             amount=unit*2;
         }
         else if(unit>200 && unit<=300)
         {
             amount=unit*3;
         }
         else
         {
             amount=unit*5;
         }
         cout<<"Bill charge:"<<amount<<endl;
     }
 int main()
 {
     Elebill obj;
     obj.printUnit();
     obj.printBill();
     return 0;
 }