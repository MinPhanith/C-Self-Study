#include<iostream>
#include <iomanip>
using namespace std;
int main(){
    int id;
    string name;
    char sex,grade;
    float s1,s2,s3,s4,s5,total,avg;
    cout<<"Enter ID:";cin>>id;
    cout<<"Enter Name:";cin.ignore();getline(cin,name);
    cout<<"Enter sex:";cin>>sex;
    cout<<"Enter Score1:";cin>>s1;
    cout<<"Enter Score2:";cin>>s2;
    cout<<"Enter Score3:";cin>>s3;
    cout<<"Enter Score4:";cin>>s4;
    cout<<"Enter Score5:";cin>>s5;
    total=s1+s2+s3+s4+s5;
    avg=total/5;
    if (avg>= 90) {
        grade = 'A';
    } else if (avg >= 80) {
        grade = 'B';
    } else if (avg >= 70) {
        grade = 'C';
    } else if (avg >= 60) {
        grade = 'D';
    } else if (avg>= 50) 
        grade = 'E'; 
    else {
        grade = 'F'; 
    }
    cout << "<------------------------------------------------------------------------------->" << endl;
    cout<<"|\t\t\t\t"<<"Student info"<<"\t\t\t\t|"<<endl;
    cout << "<------------------------------------------------------------------------------->" << endl;
    cout<<"\t\t"<<"ID"<<"\t\t\t"<<"Name"<<"\t\t\t"<<"Sex"<<endl;
    cout<<"\t\t"<<id<<"\t\t\t"<<name<<"\t\t\t"<<sex<<endl;
    cout << "<------------------------------------------------------------------------------->" << endl;
    cout<<"\t\t\t\tScore list"<<endl;
    cout << "<------------------------------------------------------------------------------->" << endl;
    cout<<"Score1"<<"\t\t"<<"Score2"<<"\t\t"<<"Score3"<<"\t\t"<<"Score4"<<"\t\t"<<"Score5"<<endl;
    cout<<s1<<"\t\t"<<s2<<"\t\t"<<s3<<"\t\t"<<s4<<"\t\t"<<s5<<endl;
    cout << "<------------------------------------------------------------------------------->" << endl;
    cout<<"\t\t\t\tResult"<<endl;
    cout << "<------------------------------------------------------------------------------->" << endl;
    cout<<"\t\t\t"<<"Total sccore ="<<total<<"pt"<<endl;
    cout<<"\t\t\t"<<"Averange ="<<avg<<endl;
    cout<<"\t\t\t"<<"grade :"<< grade<<endl;
    return 0;
}