#include<iostream>
#include<fstream>
using namespace std;

int main(){
    fstream myfile;
    myfile.open("hello.txt", ios::in); // Open the file in input mode
    
    
    int id;
    char name[30];
    float s1, s2, s3, total, avg;
    char grade;

    // Reading and displaying data from the file
    while(myfile >> id >> name >> s1 >> s2 >> s3 >> total >> avg >> grade){
        cout << "ID: " << id << endl;
        cout << "Name: " << name << endl;
        cout << "Score 1: " << s1 << endl;
        cout << "Score 2: " << s2 << endl;
        cout << "Score 3: " << s3 << endl;
        cout << "Total: " << total << endl;
        cout << "Average: " << avg << endl;
        cout << "Grade: " << grade << endl;
        cout << "------------------------" << endl;
    }

    myfile.close();
    
    return 0;
}