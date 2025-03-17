#include <iostream>
using namespace std;

class Deque {   
public:
    int *arr;
    int size;
    int front;
    int rear;

    Deque(int size) {
        arr = new int[size];
        this->size = size;
        front = -1;
        rear = -1;
    }

    void PushFront(int val) {
        // Overflow condition
        if ((front == 0 && rear == size - 1) || (rear == front - 1)) {
            cout << "Queue is full" << endl;
            return;
        }
        // Empty condition
        else if (front == -1 && rear == -1) {
            front = rear = 0;
            arr[front] = val;
        }
        // Circular condition
        else if (front == 0 && rear != size - 1) {
            front = size - 1;
            arr[front] = val;
        }
        // Normal condition
        else {
            front--;
            arr[front] = val;
        }
    }

    void PushBack(int val) {
        // Overflow condition
        if ((front == 0 && rear == size - 1) || (rear == front - 1)) {
            cout << "Queue is full" << endl;
            return;
        }
        // Empty condition
        else if (front == -1 && rear == -1) {
            front = rear = 0;
            arr[rear] = val;
        }
        // Circular condition
        else if (rear == size - 1 && front != 0) {
            rear = 0;
            arr[rear] = val;
        }
        // Normal condition
        else {
            rear++;
            arr[rear] = val;
        }
    }

    void PopFront() {
        // Underflow condition
        if (front == -1 && rear == -1) {
            cout << "Queue is empty" << endl;
            return;
        }
        // Single element condition
        else if (front == rear) {
            arr[front] = -1;
            front = rear = -1;
        }
        // Circular condition
        else if (front == size - 1) {
            arr[front] = -1;
            front = 0;
        }
        // Normal condition
        else {
            arr[front] = -1;
            front++;
        }
    }

    void PopBack() {
        // Underflow condition
        if (front == -1 && rear == -1) {
            cout << "Queue is empty" << endl;
            return;
        }
        // Single element condition
        else if (front == rear) {
            arr[rear] = -1;
            front = rear = -1;
        }
        // Circular condition
        else if (rear == 0) {
            arr[rear] = -1;
            rear = size - 1;
        }
        // Normal condition
        else {
            arr[rear] = -1;
            rear--;
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
    Deque dq(5);
    dq.PushBack(10);
    dq.PushBack(20);
    dq.PushBack(30);
    dq.PushBack(40);
   dq.PushBack(50);
    
    dq.print(); // Display the queue
    
    return 0;
}
