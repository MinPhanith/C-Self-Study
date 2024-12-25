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
    int op;
    fstream myfile;
    do{
        cout<<"1.Write\n2.Read\n0.Exit"<<endl;
        cout<<"Enter one option :";
        cin>>op;
        switch (op)
        {
        case 1:
        myfile.open("Info_person.bin",ios::app|ios::binary);

        if(!myfile){
        cout<<"Enable to open file"<<endl;
        }
        else{
        per.input();
        myfile.write((char*)&per ,sizeof(per));
     }
     myfile.close();
            
            break;
        case 2:
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
        break;   
            
        
        default:
        cout<<"Enter the right option number"<<endl;
            break;
        }
    }while(op!=0);


}