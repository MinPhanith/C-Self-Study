#include<iostream>
using namespace std;
class Employee{
    private :
    int id;
    string name;
    string gender;
    float salary;
    public :
    void SetE1(int i, string n, string g,float s) {
        id = i;
        name = n;
        gender = g;
        salary=s;
    }

    int GetId()  {
        return id;
    }

    string GetName() {
        return name;
    }

    string GetGender() {
        return gender;
    }
    float Getsalary(){
        return salary;
    }
};

int main() {
    Employee Data;
    int ii;
    string nn;
    string gg;
    float ss;

    cout << "Enter id: "; cin >> ii;
    cout << "Enter name: "; cin.ignore();getline(cin,nn);
    cout << "Enter gender: ";getline(cin,gg);
    cout << "Enter salary: "; cin >> ss;

    Data.SetE1(ii, nn, gg,ss);

    cout << "Id\t\tName\t\tGender\t\tSalary" << endl;
    cout << Data.GetId() << "\t\t" << Data.GetName() << "\t\t" << Data.GetGender()<< "\t\t" << Data.Getsalary()<<"$"<< endl;

    return 0;
}

   