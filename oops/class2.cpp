#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Defining the student class
class student {
public:
    int id;
    int age;
    int grade;
    string name;
    int roll_no;
    string friend_name;

    // Constructor
    student(int id, int age, int grade, string name, int roll_no, string friend_name) {
        this->id = id;
        this->age = age;
        this->grade = grade;
        this->name = name;
        this->roll_no = roll_no;
        this->friend_name = friend_name;
    }
};

int main() { 
    // Creating student objects
    student s1(1, 12, 1, "Chota Bheem", 1, "Chutki");
    student s2 = s1;  // Copy constructor (default one will work here)

    // Printing names
    cout << s1.name << endl;
    cout << s2.name << endl;

    return 0;
}
