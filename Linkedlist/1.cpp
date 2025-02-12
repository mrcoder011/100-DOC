#include <iostream>
using namespace std;

class node {
public:
    int data;       // Fixed the colon ':' to semicolon ';'
    node *next;

    node() {        // Default constructor
        cout << "I am inside this ctor" << endl;
        this->next = NULL;
    }

    node(int data) {   // Parameterized constructor
        this->data = data;
        this->next = NULL;
    }
};

int main() {
    node a;   // This will call the default constructor
    return 0;
}
