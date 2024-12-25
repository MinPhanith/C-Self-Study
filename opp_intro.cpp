#include<iostream>
#include <iomanip>
using namespace std;
class Test{
    private:
    int x,y;
    public:
    void input(){
        cout<<"Enter X:";cin>>x;
        cout<<"Enter Y:";cin>>y;
    }
    void output(){
        cout<<setw(5)<<"X="<<x<<setw(5)<<"Y="<<y<<endl;
        cout<<setw(5)<<"X+Y="<<x+y<<endl;

    }
};
int main(){
    Test t;
    t.input();
    t.output();
    
    

}