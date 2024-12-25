#include<iostream>
using namespace std;

class Calculate {
    public:
    // Function to add two integers
    int add(int a, int b) {
        return a + b;
    }

    // Overloaded function to add three integers
    int add(int a, int b, int c) {
        return a + b + c;
    }
    float add(  float a,  float b) {
        return a + b ;
    }
    float add(  float a,  float b,  float c) {
        return a + b + c;
    }
};

int main() {
    Calculate c;

    cout << "Sum of A + B: " << c.add(10, 20) << endl;
    cout << "Sum of A + B + C: " << c.add(10, 20, 30)<<endl;
    cout << "Sum of A + B: " << c.add(5.0f, 2.0f) << endl;
    cout << "Sum of A + B + C: " << c.add(1.0f, 2.0f, 3.0f)<<endl;

    return 0;
}
