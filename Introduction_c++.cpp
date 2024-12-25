#include<iostream>
using namespace std;
int main(){
    int id;
    string name;
    char sex;
    int age;
    float salary;
    string address;

    cout<<"Enter id:";cin>>id;
    cout<<"Enter name:";cin.ignore();getline(cin,name);
    cout<<"Enter Sex:";cin>>sex;
    cout<<"Enter age:";cin>>age;
    cout<<"Enter  salary:";cin>>salary;
    cout<<"Enter Address:";cin.ignore();getline(cin,address);
    //=============================================================
    cout<<"<------------------Information---------------------->\n";
    cout<<"\t\tID:"<<id<<endl;
    cout<<"\t\tName:"<<name<<endl;
    cout<<"\t\tSex:"<<sex<<endl;
    cout<<"\t\tAge:"<<age<<"year old"<<endl;
    cout<<"\t\tSalary:"<<salary<<"$"<<endl;
    cout<<"\t\tAddress:"<<address<<endl;
    cout<<"<------------------ That all Information---------------------->\n";
}