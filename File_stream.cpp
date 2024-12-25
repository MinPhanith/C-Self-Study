#include<iostream>
#include<fstream>
using namespace std;
int main(){
    fstream myfile;
    myfile.open("file.txt",ios::app);
    int id;
    char name[30];

    cout<<"Entere ID:";cin>>id;
   
    cout<<"Entere Name:";cin.ignore();cin.getline(name,30);
    myfile<<id<<"   "<<name;
    myfile.close();
/////////////////////////////////////////////////////////////////
    myfile.open("file.txt",ios::in);
    int id_R;
    char name_R[30];
    myfile>>id_R>>name_R;
    cout<<id_R<<"   "<<name_R;
    myfile.close();
    



    
    
}