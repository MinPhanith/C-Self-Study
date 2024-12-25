#include<iostream>
using namespace std;
class person{
    private :
        int id;
        string name;
        string gen;
        float salary;
    public :
       void input(){
            cout<<"Enter ID:";cin>>id;
            cout<<"Enter Name:";cin.ignore();getline(cin,name);
            cout<<"Enter Gender:";getline(cin,gen);
            cout<<"Enter Salary:";cin>>salary;
       } 
       void output(){
        cout<<id<<"\t\t\t"<<name<<"\t\t\t"<<gen<<"\t\t\t"<<salary<<"$"<<"\t\t\t"<<endl;
       }


};
int main(){
    int i,n;
    person data[100];
    cout<<"Enter the number of person:";cin>>n;
    for(i=0;i<n;i++){
        data[i].input();
    }
    cout<<"<------------------------------------------------------------------------------------>"<<endl;
    cout<<"ID"<<"\t\t\t"<<"Name"<<"\t\t\t"<<"Gender"<<"\t\t\t"<<"Salary"<<"\t\t\t"<<endl;
    for(i=0;i<n;i++){
        data[i].output();
    }
 
 
}