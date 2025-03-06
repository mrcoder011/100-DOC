#include <iostream>
using namespace std;

class Stack {
public:
    int* arr;
    int size;
    int top;

    Stack(int size) {
        arr = new int[size];
        this->size = size;
        this->top = -1;
    }

    void push(int data) {
        if (top == size - 1) {
            cout << "Stack completely full! OVERFLOW" << endl;
            return;
        }
        top++;
        arr[top] = data;
    }

    void pop() {
        if (top == -1) {
            cout << "No element! Stack empty." << endl;
            return;
        }
        top--;
    }

    bool isempty() {
        return (top == -1);
    }

    int gettop() {
        if (top == -1) {
            cout << "No element! Stack empty." << endl;
            return -1;
        }
        return arr[top];
    }

    int getsize() {
        return top + 1;
    }

    void print() {
        cout << "Top Index: " << top << endl;
        cout << "Top Element: " << gettop() << endl;
        cout << "Stack: ";
        for (int i = 0; i <= top; i++) {
            cout << arr[i] << " ";
        }
        cout << endl << endl;
    }
};

int main() {
    Stack st(8);  // Creating a stack of size 8
    st.push(10);
    st.print();
    st.push(20);
    st.print();
    st.push(30);
    st.print(); 
    st.push(40);
    st.print();
    cout<< "size of element " << st.getsize();
     
    /*st.pop();
    st.print();
    st.pop();
    st.print();
    st.pop();
    st.print();
    st.pop();
    st.print();
    


    return 0;*/
  
  /*  st.push(10);
    st.print();
    st.push(20);
    st.print();
    st.push(30);
    st.print(); 
    st.push(40);
    st.print();
    st.push(10);
    st.print();
    st.push(20);
    st.print();
    st.push(30);
    st.print(); 
    st.push(40);
    st.print();
    cout<< st.gettop();
    cout<< st.getsize();

*/
} 
