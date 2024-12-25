#include<iostream>
using namespace std;
class Data{
    private :
    int n1;
    int n2;
    public :
    void Setn1(int num){
        n1=num;
    }
    int Getn1(){
        return n1;
    }
    void Setn2(int num2){
        n2=num2;
    }
    int Getn2(){
        return n2;
    }

};
int main(){
    Data D;
    int n1,n2;


cout<<"Enter n1:";cin>>n1;
cout<<"Enter n2:";cin>>n2;
D.Setn1(n1);
D.Setn2(n2);
cout<<"Num1="<<D.Getn1()<<endl;
cout<<"Num2="<<D.Getn2()<<endl;


}
