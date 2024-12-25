#include <iostream>
using namespace std;

template <typename T>
T Sum(T a) {
    return a;  
}

template <typename T, typename... Args>
T Sum(T a, Args... args) {
    return a + Sum(args...);  
}

int main() {
    
    cout << "Sum of integers: " << Sum(1, 2, 3, 4, 5) << endl;
    cout << "Sum of doubles: " << Sum(1.5, 2.5, 3.0, 4.0, 5.0) << endl;
    cout << "Sum of mixed types: " << Sum(1, 2.5, 3L, 4.0f, 5.0) << endl;
    cout << "Sum of long doubles: " << Sum(1.0L, 2.0L, 3.0L, 4.0L, 5.0L) << endl;
    cout << "Sum of floats: " << Sum(1.0f, 2.0f, 3.0f, 4.0f, 5.0f) << endl;

    return 0;
}
