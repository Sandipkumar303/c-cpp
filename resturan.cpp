#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{    
    int blacktea,greentea,whitetea,herbaltea;
    int choice;
    int  price,gst,quantity,net;
    int earlygray=50,Darjeeling=65,assam=40,aspice=75;
    cout<<"\n\t\t WHAT WOULD YOU LIKE TO HAVE"<<endl;
    cout<<"||==============================================================||"<<endl;
    cout<<"||    BLACK TEA               ::            GREEN TEA           ||"<<endl;
    cout<<"|| 1).Early Greay     50/-    ::      1).Green Ginger     45/-  ||"<<endl;  
    cout<<"|| 2).Darjeeling      65/-    ::      2).jasmine          50/-  ||"<<endl;
    cout<<"|| 3).Assam           40/-    ::      3).Himalya green    60/-  ||"<<endl;
    cout<<"|| 4).Amareuo spice   75/-    ::                                ||"<<endl;
    cout<<"||______________________________________________________________||"<<endl;  
    cout<<"||    WHITE TEA               ::            HERBAL TEA          ||"<<endl;
    cout<<"|| 1).White peony     100/-   ::       1).Ginger          35/-  ||"<<endl; 
    cout<<"|| 2).Imperial White  110/-   ::       2).Lavender        55/-  ||"<<endl;
    cout<<"|| 3).White darjeeling 120/-  ::       3).Lemongrase      20/-  ||"<<endl;
    cout<<"||                            ::       4).Rose Hips       65/-  ||"<<endl;
    cout<<"||==============================================================||"<<endl;
    cout<<" press 1 to BLACK TEA:\n";
    cout<<" press 2 to GREEN TEA:\n";
    cout<<" press 3 to WHITE TEA:\n";
    cout<<" press 4 to HERBAL TEA:\n";
    cout<<"plese enter your choice:";
    cin>>choice;
    if(choice==1)
    { p:
        cout<<"     *BLACK TEA*       "<<endl;
        cout<<"1).Early Greay     50/-"<<endl;   
        cout<<"2.)Darjeeling      65/-"<<endl;
        cout<<"3).Assam           40/-"<<endl;
        cout<<"4).Amareuo spice   75/-"<<endl;
        cout<<"_______________________"<<endl;
        int type;
        cout<<" press 1 for Early Greay   50/-:\n";
        cout<<" press 2 for Darjeeling    65/-:\n";
        cout<<" press 3 for Assam         40/-:\n";
        cout<<" press 4 for Amareuo spice 75/-:\n";
        cout<<"which type of you want :";
        cin>>type;
    
        switch(type)
        {
        case 1:
        cout<<"Early Greay"<<endl;
        cout<<"how many quantity you want:";
        cin>>quantity;
        price=quantity*earlygray;
        gst=(price/100)*22;
        net=price+gst;
        cout<<"___________*YOUR BILL*____________\n\n";
        cout<<"the price of Early Greay :"<<price<<endl;
        cout<<" include gst with 22%     : "<<gst<<endl;
        cout<<" the net amount is         :"<<net<<endl;
        cout<<"_________*THANK YOU*_____________\n\n";
        break;
        case 2:
        cout<<"Darjeeling"<<endl;
        cout<<"how many quantity you want:";
        cin>>quantity;
        price=quantity*Darjeeling;
        gst=(price/100)*22;
        net=price+gst;
        cout<<"___________*YOUR BILL*____________\n\n";
        cout<<"the price of Darjeeling  :"<<price<<endl;
        cout<<" include gst with 22%     : "<<gst<<endl;
        cout<<" the net amount is         :"<<net<<endl;
        cout<<"_________*THANK YOU*_____________\n\n";  cout<<"Darjeeling"<<endl;
        break;
        case 3:
        cout<<"*Assam*"<<endl;;
        cout<<"how many quantity you want:";
        cin>>quantity;
        price=quantity*assam;
        gst=(price/100)*22;
        net=price+gst;
        cout<<"___________*YOUR BILL*____________\n\n";
        cout<<"the price of Assam       :"<<price<<endl;
        cout<<" include gst with 22%     : "<<gst<<endl;
        cout<<" the net amount is         :"<<net<<endl;
        cout<<"_________*THANK YOU*_____________\n\n";
        break;
        case 4:
        
        cout<<"Amareuo Spice"<<endl;
        cout<<"how many quantity you want:";
        cin>>quantity;
        price=quantity*aspice;
        gst=(price/100)*22;
        net=price+gst;
        cout<<"___________*YOUR BILL*____________\n\n";
        cout<<"the price of Amareuo spice :"<<price<<endl;
        cout<<" include gst with 22%      : "<<gst<<endl;
        cout<<" the net amount is         :"<<net<<endl;
        cout<<"_________*THANK YOU*_____________\n\n";
        break;
         }
         
        
    }
    else if(choice==2)
        {
        quantity;
        cout<<"       *GREEN TEA*          "<<endl;
        cout<<"1).Green Ginger     45/-    "<<endl; 
        cout<<"2).jasmine          50/-    "<<endl;
        cout<<"3).Himalya green    60/-    "<<endl;
        cout<<"____________________________"<<endl;
        cout<<"how many quantity you want:";
        cin>>quantity;
        price;
        cout<<"enter price of green tea :";
        cin>>price;
        price=quantity*price;
        gst=(price/100)*22;
        net=price+gst;
        cout<<"___________*YOUR BILL*____________\n\n";
        cout<<"the price of green tea :"<<price<<endl;
        cout<<" include gst with 15% : "<<gst<<endl;
        cout<<" the net amount is :"<<net<<endl;
        cout<<"_________*THANK YOU*_____________\n\n";
        }
    else if(choice==3)
    {
        int quantity;
        cout<<"       *WHITE TEA*         "<<endl;
        cout<<"1).White peony      100/-  "<<endl;
        cout<<"2).Imperial White  110/-   "<<endl;
        cout<<"3).White darjeeling 120/-  "<<endl;
        cout<<"___________________________"<<endl;
        cout<<"enter price of white tea :";
        cin>>price;
        price=quantity*price;
        gst=(price/100)*22;
        net=price+gst;
        cout<<"___________*YOUR BILL*____________\n\n";
        cout<<"the price of white tea :"<<price<<endl;
        cout<<" include gst with 15% : "<<gst<<endl;
        cout<<" the net amount is :"<<net<<endl;
        cout<<"_________*THANK YOU*_____________\n\n";
    }
else if(choice==4)
     {
        quantity;
        cout<<"        *HERBAL TEA*       "<<endl;
        cout<<"1).Ginger          35/-    "<<endl;
        cout<<"2).Lavender        55/-    "<<endl;
        cout<<"3).Lemongrase      20/     "<<endl;
        cout<<"4).Rose Hips       65/-    "<<endl;
        cout<<"___________________________"<<endl;
        cout<<"how many quantity you want:";
        cin>>quantity;
        price;
        cout<<"enter price of herbal tea :";
        cin>>price;
        price=quantity*price;
        gst=(price/100)*22;
        net=price+gst;
        cout<<"___________*YOUR BILL*____________\n\n";
        cout<<"the price of herbal tea :"<<price<<endl;
        cout<<" include gst with 15% : "<<gst<<endl;
        cout<<" the net amount is :"<<net<<endl;
        cout<<"_________*THANK YOU*_____________\n\n";
     }
    else
    {
        cout<<"sorry this item is not avalaible :";
     }
      return 0;
}