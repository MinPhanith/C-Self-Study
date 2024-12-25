#include<iostream>
#include <iomanip>
using namespace std;
int main(){
    string name;
    int code,qty;
    double price,total,payment,dis,total_AfterDis;

    cout<<"Enter product code:";cin>>code;
    cout<<"Enter product name:";cin.ignore();getline(cin,name);
    cout<<"Enter product Qty:";cin>>qty;
    cout<<"Enter product price:";cin>>price;
    total=price*qty;
    cout<<"Total="<<"$"<<total<<endl;
    if(total>=1 && total<10){
        dis=10;
    }else if(total>=10 && total<20){
        dis=20;
    }else if(total>=20 && total<30){
        dis=30;
    }else if(total>=30 && total<40){
        dis=40;
    }else if(total>=40 && total<50){
        dis=50;
    }else if(total>=50 && total<60){
        dis=60;
    }else{
        dis=70;
    }
    total_AfterDis=(total*dis)/100;
    payment=total-total_AfterDis;
    cout << "<------------------------------------------------------------------------------->" << endl;
    cout<<"\t\t\t\t"<<"Payment paper"<<endl;
    cout << "<------------------------------------------------------------------------------->" << endl;
    cout<<"Code"<<"\t\t"<<"Name"<<"\t\t"<<"Qty"<<"\t\t"<<"Price"<<"\t\t"<<"Total"<<endl;
    cout<<code<<"\t\t"<<name<<"\t\t"<<qty<<"\t\t"<<price<<"\t\t"<<total<<"\t\t"<<endl;
    cout << "<------------------------------------------------------------------------------->" << endl;
    cout<<"\t\t\t\t"<<"Discount="<<dis<<"%"<<endl;    
    cout<<"\t\t\t\t"<<"Discount price="<<total_AfterDis<<"$"<<endl;
    cout<<"\t\t\t\t"<< "Payment = " << payment <<"$"<<endl;
    cout << "<------------------------------------------------------------------------------->" << endl;
    cout<<"\t\t\t\t"<<"Thank You"<<endl;
    cout << "<------------------------------------------------------------------------------->" << endl;
    return 0;
}