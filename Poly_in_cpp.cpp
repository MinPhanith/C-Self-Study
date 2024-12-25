#include<iostream>
using namespace std;
class Person{
    private :
       int id;
       string name;
       string gender;
    public :
      Person(){
        id=0;
        name="NULL";
        gender="NULL";
      }
      Person(int id,string name,string gender){
        this->id=id;
        this->name=name;
        this->gender=gender;
      }
      Per
      void input(){
        cout<<"Enter ID:";cin>>id;
        cout<<"Enter Name:";cin.ignore();getline(cin,name);
        cout<<"Enter Gender:";getline(cin,gender);
      }
      void output(){
        cout<<"ID="<<id<<endl;
        cout<<"Name:"<<name<<endl;
        cout<<"Gender:"<<gender<<endl;

      }

        

};
int main(){
    Person p;
    //p.input();
    p.output();
    





    return 0;
}