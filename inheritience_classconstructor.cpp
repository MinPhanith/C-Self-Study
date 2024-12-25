
#include<iostream>
using namespace std;

class Test1 {
protected:
    int a;
public:
    Test1(int a) {
        this->a = a;
    }
    void output() {
        cout << "A : " << a << endl;
    }
};

class Test2 {
protected:
    int b;
public:
    Test2(int b) {
        this->b = b;
    }
    void output() {
        cout << "B : " << b << endl;
    }
};

class Sub : public Test1, public Test2 {
private:
    int c;
public:
    Sub(int c, int b, int a) : Test1(a) , Test2(b) {
        this->c = c;
    }
    void output() {
        Test1::output();
        Test2::output();
        cout << "C : " << c << endl;
    }
};

int main() {
    Sub s(10, 20, 30);
    s.output();

    return 0;
}
