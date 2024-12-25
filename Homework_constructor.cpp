#include<iostream>
using namespace std;
class Student{
    private:
        int id;
        string name;
        string gender;
        float salary;
    public:
    Student(){
        id=0;
        name="Unknown";
        gender="Unknown";
        salary=0;
            
        }
        Student(int id,string name,string gender,float salary ){
            this->id=id;
            this->name=name;
            this->gender=gender;
            this->salary=salary;      
        }
        

        void output(){
            cout<<"ID="<<id<<endl;
            cout<<"Name:"<<name<<endl;
            cout<<"Gender:"<<gender<<endl;
            cout<<"Salary:"<<salary<<"$"<<endl;
        }
};
int main(){
    Student D(01,"Kdm ah Speed","gay",1000);
        D.output();
    
}