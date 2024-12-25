#include<iostream>
using namespace std;

class calculateArea {
    public:
    // Overloaded function for rectangle (int)
    void Area(int width, int length) {
        int area = width * length;
        cout << "Area of rectangle (int): " << area << endl;
    }

    // Overloaded function for rectangle (float)
    void Area(float width, float length) {
        float area = width * length;
        cout << "Area of rectangle (float): " << area << endl;
    }

    // Overloaded function for circle
    void Area(float R) {
        cout << "Area of Circle: " << 3.14 * R * R << endl;
    }

    // Overloaded function for triangle
    void Area(float base, float height, bool isTriangle) {
        if (isTriangle) {
            float area = 0.5 * base * height;
            cout << "Area of Triangle: " << area << endl;
        }
    }
};

int main() {
    calculateArea an;
    an.Area(10, 10);                // Calls the rectangle version (int)
    an.Area(2.0f, 3.0f);            // Calls the rectangle version (float)
    an.Area(2.0f);                  // Calls the circle version
    an.Area(5.0f, 10.0f, true);     // Calls the triangle version

    return 0;
}
