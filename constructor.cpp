#include<iostream>
#include<fstream>
using namespace std;
class Person{
    protected:
        int id;
        string name;
        string dob;
    public:
    Student(){
        id=0;
        name="Unknown";
        dob="Unknown";   
        }
        Student(int id,string name,string dob ){
            this->id=id;
            this->name=name;
            this->dob=dob;
                  
        }
        void input(){
            cout<<"Enter id:";cin>>id;
            cout<<"Enter name:";cin.ignore();getline(cin,name);
            cout<<"Enter Dob:";cin.ignore();getline(cin,dob);
        }

        void output(){
            cout<<"ID="<<id<<endl;
            cout<<"Name:"<<name<<endl;
            cout<<"Dob:"<<dob<<endl;
           
        }
};
class Student : public Person{

};
int main(){
    Student D;
    int op;
    fstream myfile;
    do{
        cout<<"1.Write\n2.Read\n0.Exit"<<endl;
        cout<<"Enter one option :";
        cin>>op;
        switch (op)
        {
        case 1:
        myfile.open("Exam.bin",ios::app|ios::binary);

        if(!myfile){
        cout<<"Enable to open file"<<endl;
        }
        else{
        D.input();
        myfile.write((char*)&D ,sizeof(D));
     }
     myfile.close();
            
            break;
        case 2:
        myfile.open("Exam.bin",ios::in|ios::binary);

        if(!myfile){
        cout<<"Enable to open file"<<endl;
     }
        else{
        while(myfile.read((char*)&D ,sizeof(D)))
       {
           D.output();
       }
        myfile.close();

        }
        break;   
            
        
        default:
        cout<<"Enter the right option number"<<endl;
            break;
        }
    }while(op!=0);
}