#include <iostream>
#include <stack>
using namespace std;

class Stack {
public:
    int *arr;
    int size;
    int top1;
    int top2;

    Stack(int size) {  // Fixed constructor name
        arr = new int[size];
        this->size = size;
        top1 = -1;
        top2 = size;
    }

    void push1(int data) {
        if (top2 - top1 == 1) {  // Fixed condition
            cout << "Overflow in Stack 1" << endl;
            return;
        }
        top1++;
        arr[top1] = data;
    }

    void push2(int data) {
        if (top2 - top1 == 1) {
            cout << "Overflow in Stack 2" << endl;
            return;
        }
        top2--;
        arr[top2] = data;  // Fixed missing assignment
    }

    void pop1() {  // Removed parameter
        if (top1 == -1) {
            cout << "Underflow in Stack 1" << endl;
            return;
        }
        top1--;
    }

    void pop2() {  // Removed parameter
        if (top2 == size) {
            cout << "Underflow in Stack 2" << endl;
            return;
        }
        top2++;
    }

    void print() {
        cout << "\nTop1: " << top1 << endl;
        cout << "Top2: " << top2 << endl;
        cout << "Stack: ";
        for (int i = 0; i < size; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    Stack st(6);  // Fixed class name

    st.print();
    st.push2(100);
    
    st.print();

    return 0;
}
