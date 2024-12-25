#include<iostream>
using namespace std;

class Person{
    private: // block datamembers
        int id;
        string name;
        char gender;
    
    public: // block functions
        Person(){
            id = 0;
            name = "NULL";
            gender = 'NULL';
        }

        Person(int id, string name, char gender){
            this->id = id;
            this->name = name;
            this->gender = gender;
        }

        Person(int id, string name){
            this->id = id;
            this->name = name;
            gender = 'F';
        }

        Person(int id){
            this->id = id;
            name = "MoMo";
            gender = 'F';
        }

        void show(){
            cout << id << "\t" << name << "\t" << gender << endl;
        }
};

int main(){
    Person per(1001);
    per.show();

    Person per1(1001, "KOKO");
    per1.show();

    Person per2(1001, "Nana", 'F');
    per2.show();

    return 0;
}
