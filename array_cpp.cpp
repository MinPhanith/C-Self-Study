#include<iostream>
#include<conio.h>
#include<iomanip>
#include<string.h>
using namespace std;

class Employee{
    private:
    int id;
    string name,gen,pos;
    double salary;
    public:
    int getID(){
        return id;
    }
    string getName(){
        return name;
    }
    void Input(){
            cout<<"Enter ID:";cin>>id;
            cout<<"Enter Name:";cin.ignore();getline(cin,name);
            cout<<"Enter Gender:";getline(cin,gen);
            cout<<"Enter Position:";getline(cin,pos);
            cout<<"Enter Salary:";cin>>salary;
    }  
    void output(){
        cout<<setw(12)<<id
            <<setw(14)<<name
            <<setw(16)<<gen
            <<setw(18)<<pos
            <<setw(15)<<salary<<"$"<<endl;
    }
    void updateEmployee(){
        cout << "Updating details for Employee ID: " << id << endl;
        cout << "Enter new Name: "; cin.ignore(); getline(cin, name);
        cout << "Enter new Gender: "; getline(cin, gen);
        cout << "Enter new Position: "; getline(cin, pos);
        cout << "Enter new Salary: "; cin >> salary;
    }

};
void header(){
     cout<<setw(12)<<"ID"
            <<setw(14)<<"Name"
            <<setw(16)<<"Gender"
            <<setw(18)<<"Position"
            <<setw(15)<<"Salary"<<endl;

}
int main(){
    Employee em[50];
    int i,n,op;
    do{
        cout<<"--------------------------MENU-------------------------"<<endl;
        cout<<"1.Input\n2.Output\n3.Search\n4.Udate\n5.Delete\n6.Insert\n7.Sort\n8.Add\n9.Exit"<<endl;
        cout<<"-------------------------------------------------------"<<endl;
        cout<<"Choose one option:";cin>>op;
        switch (op){
            case 1:
                do
            {
                cout<<"Input the number of employee:";cin>>n;
                
            } while (n>50);
                for(i=0;i<n;i++){
                    cout<<"\n-----------------Employee#"<<i+1<<"-------------------"<<endl;
                    em[i].Input();
                }
                break;
            case 2:
            header();
                for(i=0;i<n;i++){
                    em[i].output();
                }
                
                break;
            case 3:
            int id_search;
            cout<<"Enter the ID of employee that you want to search:";cin>>id_search;
            for(i=0;i<n;i++){
                if(id_search==em[i].getID()){
                  header();
                  em[i].output();
                }
            }
                break;
            case 4:
            int id_Up;
            cout<<"Enter the ID of employee that you want to update:";cin>>id_Up;
            for(i=0;i<n;i++){
                if(id_Up==em[i].getID()){
                        em[i].updateEmployee(); 

                    }
            }
                break;
            case 5:
            int id_D;
            cout<<"Enter the ID of employee that you want to delete:";cin>>id_D;
            for(i=0;i<n;i++){
                if(id_D==em[i].getID()){
                    for (int j = i; j < n - 1; j++) {
                            em[j] = em[j + 1];
                        }
                        n--; 
                    }
            }
            cout<< " deleted successfully."<< endl;
                break;
            case 6:
            string search_name;
            cout<<"Enter the Name of employee that you want to update:";cin>>search_name;
              cvvccvvcccc
            for(i=0;i<n;i++){
               if(search_name == em[i].getName()){
                    em[i].updateEmployee(); 

                    }
            }
                break;        
            // case 6:l
            //     break;
            // case 7:
            //     break;
            // case 8:
            //     break;
            // case 9:
            //     break;

            }
    }while (op!=0);
    return 0;
}
