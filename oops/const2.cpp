#include <iostream>
using namespace std;

class abc {
    int x;
    int *y;  // Pointer to dynamically allocated memory

public:
    // Constructor to initialize variables
    abc() {
        x = 0;
        y = new int(0);  // Dynamically allocating memory for y
    }

    // Getter and Setter for x
    int getX() {
        return x;
    }

    void setX(int _val) {
        x = _val;
    }

    // Getter and Setter for y
    int getY() {
        return *y;
    }

    void setY(int _val) {
        *y = _val;  // Corrected to modify the value pointed by y
    }

    // Destructor to deallocate memory
    ~abc() {
        delete y;
    }
};

int main() {
    abc a;
    a.setX(10);   // Setting values
    a.setY(20);

    cout << "Value of x: " << a.getX() << endl;
    cout << "Value of y: " << a.getY() << endl;

    return 0;
}
