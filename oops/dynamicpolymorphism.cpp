#include <iostream>
using namespace std;

// Base Class: Animal
class Animal {
public:
    virtual void sound() {  // Virtual for runtime polymorphism
        cout << "Animal making sound" << endl;
    }
};

// Derived Class: Dog
class Dog : public Animal {
public:
    void sound() override {  // Override ensures correct method is called
        cout << "Dog is barking" << endl;
    }
};
class parrot : virtual public Animal {
public:
    void sound() override {
        cout << "parrot is miththu" << endl;
    }
};

// Derived Class: Cat
class Cat : virtual public Animal {
public:
    void sound() override {
        cout << "Cat is meowing" << endl;
    }
};

int main() {
    Animal* myAnimal = new Dog();  // Upcasting  
     myAnimal->sound();             // Output: Dog is barking

    delete myAnimal;               // Prevent memory leak

    myAnimal = new Cat();          // Reassigning the pointer
    myAnimal->sound();             // Output: Cat is meowing

    delete myAnimal;               // Prevent memory leak

     myAnimal = new parrot();          // Reassigning the pointer
    myAnimal->sound();             // Output: Cat is meowing

    delete myAnimal; 

    return 0;
}
