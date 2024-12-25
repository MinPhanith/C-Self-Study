#include<iostream>
#include<fstream>
using namespace std;

int main() {
    fstream myfile;
    
    // Writing to the file
    myfile.open("hello.txt", ios::out | ios::app);  // Ensure out & append modes are used

    int id;
    char name[30];
    float s1, s2, s3;
    float total, avg;
    char grade;

    // Input section
    cout << "Enter ID: "; cin >> id;
    cout << "Enter Name: "; cin.ignore(); cin.getline(name, 30);

    // Input for scores
    cout << "Enter score 1: "; cin >> s1;
    cout << "Enter score 2: "; cin >> s2;
    cout << "Enter score 3: "; cin >> s3;

    // Calculating total, average, and determining grade
    total = s1 + s2 + s3;
    avg = total / 3;

    if (avg >= 90)
        grade = 'A';
    else if (avg >= 80)
        grade = 'B';
    else if (avg >= 70)
        grade = 'C';
    else if (avg >= 60)
        grade = 'D';
    else
        grade = 'F';

    // Writing to the file
    myfile << id << " " << name << " " << s1 << " " << s2 << " " << s3 << " "
           << total << " " << avg << " " << grade << endl;

    myfile.close();  

   
    return 0;
}
