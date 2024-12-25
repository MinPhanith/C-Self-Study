#include<iostream>
using namespace std;
class person{
    protected:
    int id;
    string name;
    string sex;
    string dob;
    public :
    person(){
        id=0;
        name="N/A";
        sex="N/A";
        dob="dd/mm/yyyy";
    }
    person(int i,string n,string s,string d){
        id=i;
        name=n;
        sex=s;
        dob=d;

    }
    void input(){
        cout<<"Enter id:";cin>>id;
        cout<<"Enter name:";cin.ignore();getline(cin,name);
        cout<<"Enter sex:";getline(cin,sex);
        cout<<"Enter dob:";getline(cin,dob);
    }
    void output(){
        cout<<id<<endl;
        cout<<name<<endl;
        cout<<sex<<endl; 
        cout<<dob<<endl;
    }
    
};
class Employee : public person{
    protected:
    float salary;
    string pos;
    public:
    Employee() : person() {
        salary = 0.0;
        pos = "N/A";
    }
    void input(){
person::input();
        cout<<"Enter salary";cin>>salary;
        cout<<"Enter pos";cin>>pos;
    }
    void output(){
        person::output();
        cout<<"salary:"<<salary<<endl;
        cout<<"pos:"<<pos<<endl;

    }
};
class Students : public person{
    protected:
    float score;
    public:
    Students() : person() {
        score = 0.0;
    }
    void input(){
        person::input();
        cout<<"Enter score:";cin>>score;
    }
    void output(){
        person::output();
        cout<<"score:"<<score<<endl;

    }

};
int main(){
    Employee  e;
    cout<<"====================Employee info======================\n";
    e.input();
    e.output();
    Students s;
    cout<<"====================Students info======================\n";
    s.input();
    s.output();

            
    return 0;
}