#include<iostream>
using namespace std;
class Bankacc{
    private:
    int accnum;
    double balance;
    public:
    Bankacc(){
        accnum=0;
        balance=0.0;
    }
    Bankacc(int accnum){
        this->accnum=accnum;
    }
    Bankacc(double balance){
        accnum=0;
        this->balance=balance;

    }
    Bankacc(int accnum,double balance){
         this->accnum=accnum;
         this->balance=balance;
    }
    void Info(){
        cout<<"AccNumber:"<<accnum<<endl;
        cout<<"Balance:"<<balance<<"$"<<endl;
    }

};
int main(){
    Bankacc user;
    user.Info();
    Bankacc user1(1001.00);
    user1.Info();
    Bankacc user2(100);
    user2.Info();
    Bankacc user3(1001,100000);
    user3.Info();

}