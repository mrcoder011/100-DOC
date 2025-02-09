#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Base Class: Teacher
class person{
    public:
    void walk(){
        cout<< "walking "<< endl;

    }
};
class Teacher : virtual public person

 {
public:
    void teach() {
        cout << "Teaching" << endl;
    }
};

// Base Class: Researcher
class Researcher : virtual public person
{
public:
    void researching() {  // Moved inside the class
        cout << "Researching" << endl;
    }
};

// Derived Class: Professor inherits from Teacher and Researcher
class Professor : public Teacher, public Researcher {
public:
    void boring() {
        cout << "Boring" << endl;
    }
};

int main() {
    Professor p;
    // solution by scope resolution 
   // p.Teacher::walk();  
//p.Researcher :: walk();
p.walk();
    return 0;
}
