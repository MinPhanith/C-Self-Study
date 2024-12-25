#include <iostream>
using namespace std;

class Person {
private:
    int id;
    string name;
    char gender;

public:
    void SetP1(int i, string n, char g) {
        id = i;
        name = n;
        gender = g;
    }

    int GetId()  {
        return id;
    }

    string GetName() {
        return name;
    }

    char GetGender() {
        return gender;
    }
};

int main() {
    Person D;
    int jj;
    string nn;
    char gg;

    cout << "Enter id: "; cin >> jj;
    cout << "Enter name: "; cin.ignore();getline(cin,nn);
    cout << "Enter gender: "; cin >> gg;

    D.SetP1(jj, nn, gg);

    cout << "Id\t\tName\t\tGender" << endl;
    cout << D.GetId() << "\t\t" << D.GetName() << "\t\t" << D.GetGender() << endl;

    return 0;
}
