#include<iostream>
#include<fstream>
using namespace std;
class Person{
        private:
    int id;
    char name[30];
        public:
    void input(){
    cout << "Enter ID: "; 
    cin >> id;
    cout << "Enter Name: "; 
    cin.ignore(); 
    cin.getline(name, 30);

    }
    void output(){
        cout<<id<<"\t"<<name<<endl;

    }    
};
int main(){
    Person per;
    fstream myfile;

    myfile.open("Info_person.bin",ios::in|ios::binary);

    if(!myfile){
        cout<<"Enable to open file"<<endl;
    }
    else{
        while(myfile.read((char*)&per ,sizeof(per)))
       {
           per.output();
       }
    myfile.close();

    }
}