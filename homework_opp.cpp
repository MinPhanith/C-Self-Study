#include<iostream>
using namespace std;

class Student {
    private:
        int id;
        string name, gender;
        float s1, s2, s3;
    public:
        void input() {
            cout << "Enter ID: "; cin >> id;
            cout << "Enter Name: "; cin.ignore(); getline(cin, name);
            cout << "Enter Gender: "; getline(cin, gender);
            cout << "Score 1: "; cin >> s1;
            cout << "Score 2: "; cin >> s2;
            cout << "Score 3: "; cin >> s3;
        }

        float Total() {
            return s1 + s2 + s3;
        }

        float Avg() {
            return (s1 + s2 + s3) / 3;
        }

        char grade() {
            float avg = Avg();
            if (avg >= 90) {
                return 'A';
            } else if (avg >= 80) {
                return 'B';
            } else if (avg >= 70) {
                return 'C';
            } else if (avg >= 60) {
                return 'D';
            } else if (avg >= 50) {
                return 'E';
            } else {
                return 'F';
            }
        }

        void output() {
            cout << "<------------------------------------------------------------------------------->" << endl;
            cout << "\t\t\t\t" << "Student Info" << endl;
            cout << "<------------------------------------------------------------------------------->" << endl;
            cout << "\t\t" << "ID" << "\t\t\t" << "Name" << "\t\t\t" << "Gender" << endl;
            cout << "\t\t" << id << "\t\t\t" << name << "\t\t\t" << gender << endl;
            cout << "<------------------------------------------------------------------------------->" << endl;
            cout << "\t\t\t\t" << "Student's Score List" << endl;
            cout << "<------------------------------------------------------------------------------->" << endl;
            cout <<"\t\t"<< "Score1" << "\t\t" << "Score2" << "\t\t" << "Score3" << endl;
            cout <<"\t\t"<< s1 << "\t\t" << s2 << "\t\t" << s3 << endl;
            cout << "<------------------------------------------------------------------------------->" << endl;
            cout<<"\t\t\t\t"<<"Student`s result"<<endl;
            cout << "<------------------------------------------------------------------------------->" << endl;
            cout << "Total Score: " << Total() << "\t\t" << "Average: " << Avg() << "\t\t" << "Grade: " << grade() << endl;
            
        }
};

int main() {
    Student Data;
    Data.input();
    Data.output();

    return 0;
}
