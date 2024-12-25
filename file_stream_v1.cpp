#include<iostream>
#include<fstream>
using namespace std;

int main() {
    fstream myfile;
    
    // Append data to the file
    myfile.open("file.txt", ios::app);
    int id;
    char name[30];

    cout << "Enter ID: "; 
    cin >> id;
   
    cout << "Enter Name: "; 
    cin.ignore(); 
    cin.getline(name, 30);

    myfile << id << "   " << name << endl;
    myfile.close();
    
    /////////////////////////////////////////////////////////////////
    
    // Read all data from the file
    myfile.open("file.txt", ios::in);
    int id_R;
    char name_R[30];

    if (myfile.is_open()) {
        // Keep reading until the end of the file
        while (myfile >> id_R) {
            myfile.getline(name_R, 30);  // Reading the name part
            cout << id_R << "   " << name_R << endl;
        }
        myfile.close();
    } else {
        cout << "Unable to open file";
    }

    return 0;
}
