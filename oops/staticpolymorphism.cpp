#include <iostream>
using namespace std;

// Custom Vector Class
class MyVector {
    int x, y;

public:
    // Constructor
    MyVector(int x, int y) : x(x), y(y) {}

    // Overloading the + operator
    MyVector operator+(const MyVector &src) {
        return MyVector(this->x + src.x, this->y + src.y);
    }

    // Display Function
    void display() {
        cout << x << " " << y << endl;
    }
};

int main() {
    MyVector v1(2, 3);
    MyVector v2(4, 5);

    // Using the overloaded + operator
    MyVector v3 = v1 + v2;
    v3.display();  // Output should be: 6 8

    return 0;
}
