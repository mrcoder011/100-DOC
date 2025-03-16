#include <iostream>
using namespace std;

class CQueue {
public:
    int *arr;
    int size;
    int front;
    int rear;

    CQueue(int size) {
        this->size = size;
        arr = new int[size];
        front = -1;
        rear = -1;

        // Initialize array with zeros
        for (int i = 0; i < size; i++) {
            arr[i] = 0;
        }
    }

    void push(int val) {
        // Overflow condition
        if ((front == 0 && rear == size - 1) || (rear == front - 1)) {
            cout << "Queue is full" << endl;
            return;
        }

        // Empty condition
        if (front == -1) {
            front = rear = 0;
        }
        // Circular condition
        else if (rear == size - 1 && front != 0) {
            rear = 0;
        }
        // Normal condition
        else {
            rear++;
        }

        arr[rear] = val;
    }
    void pop() {
        // Underflow condition
        if (front == -1) {
            cout << "Queue is empty" << endl;
            return;
        }

        arr[front] = 0;

        // Single element condition
        if (front == rear) {
            front = rear = -1;
        }
        // Circular condition
        else if (front == size - 1) {
            front = 0;
        }
        // Normal condition
        else {
            front++;
        }
    }

    void print() {
        cout << "Printing Queue: ";
        for (int i = 0; i < size; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    CQueue q(5);
    
    q.print();  // Initially prints: 0 0 0 0 0

    q.push(10);
    q.print();  // Prints: 10 0 0 0 0

    q.push(20);
    q.print();  // Prints: 10 20 0 0 0

    q.push(30);
    q.print();  // Prints: 10 20 30 0 0

    q.push(40);
    q.print();  // Prints: 10 20 30 40 0

    q.push(50);
    q.print();  // Prints: 10 20 30 40 50
    q.push(60);  // Prints: Queue is full
    q.print();  // Prints: 10 20 30 40 50
    q.pop();
    q.print();  // Prints: 0 20 30 40 50    


    return 0;
}
