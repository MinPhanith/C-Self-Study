#include <iostream>
#include <fstream>
using namespace std;

// Function to write data to the file
void WriteDataFromArrayToFile() {
    ofstream Myfile("school.txt", ios::app); // Open file in append mode
    int id;
    char name[30];
    cout << "Enter ID: "; 
    cin >> id;
    cout << "Enter Name: "; 
    cin.ignore(); // Ignore leftover newline character from previous input
    cin.getline(name, 30);
    Myfile << id << " " << name << endl; // Write ID and name to file
    Myfile.close();
}

// Function to read data from the file
void ReadDataFromFileToArray() {
    ifstream Myfile("school.txt", ios::in); // Open file in read mode
    int id;
    char name[30];

    if (!Myfile.is_open()) {
        cout << "Error: Could not open the file\n";
        return;
    }

    while (Myfile >> id >> name) { // Read ID and name from file
        cout << "ID: " << id << ", Name: " << name << endl;
    }

    Myfile.close();
}

// Main function
int main() {
    int op;
    do {
        // Display menu options
        cout << "1. Write Data to File\n";
        cout << "2. Read Data from File\n";
        cout << "3. Exit\n";
        cout << "Choose one option: ";
        cin >> op;

        switch (op) {
            case 1:
                WriteDataFromArrayToFile(); // Call function to write data
                break;
            case 2:
                ReadDataFromFileToArray(); // Call function to read data
                break;
            case 3:
                cout << "Exiting program." << endl; // Exit option
                break;
            default:
                cout << "Invalid option. Please choose again." << endl;
        }
    } while (op != 3); // Loop until the user chooses to exit

    return 0;
}
