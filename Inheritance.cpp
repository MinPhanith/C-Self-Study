#include<iostream>
using namespace std;
class ID{
    protected:
    int id;
};
class NAME : public ID{ 
    protected:
    string name;
    
};
class GEN : public NAME{
    protected:
    string gen;
    public:
    void input(){
        cout<<"Enter ID:";cin>>id;
        cout<<"Enter Name:";cin.ignore();getline(cin,name);
        cout<<"Enter Gender:";getline(cin,gen);
        
    }
    void output(){
        cout<<"Id:"<<id<<endl;
        cout<<"Name:"<<name<<endl;
        cout<<"Gender:"<<gen<<endl;
    }


};
int main(){
    GEN data;
    data.input();
    data.output();
    return 0;

}