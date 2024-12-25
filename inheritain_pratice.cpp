#include<iostream>
using namespace std;
class Person{
    protected:
    int id;
    string name;
    string sex;

};
class Student : public Person{
    protected:
    float score;
    public:
    void input(){
        cout<<"Enter id:";cin>>id;
        cout<<"Enter name:";cin.ignore();getline(cin,name);
        cout<<"Enter sex:";getline(cin,sex);
        cout<<"Enter score:";cin>>score;
    }
    void output(){
        cout<<id<<endl;
        cout<<name<<endl;
        cout<<sex<<endl;
        cout<<score<<endl;
    }


};
int main(){
    Student d;
    d.input();
    d.output();
}