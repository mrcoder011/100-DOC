
#include <iostream>
using namespace std;

class CQueue {
public:
    int *arr;
    int size;
    int front;
    int rear;

    CQueue(int size) {
        arr = new int[size];
        this->size = size;
        front = -1;
        rear = -1;
    }

    void push(int val) {
        // Overflow condition
        if (front == 0 && rear == size - 1) {
            cout << "Queue is full" << endl;
            return;
        }
        
        // Empty condition
        else if (front == -1 && rear == -1) {
            front++;
            rear++;
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

    void pop() {
        // Underflow condition
        if (front == -1 && rear == -1) {
            cout << "Queue is empty" << endl;
            return;
        }

        // If only one element is present
        else if (front == rear) {
            arr[front] = -1;
            front = -1;
            rear = -1;
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

    /*bool isempty() {
        return (front == -1 && rear == -1);
    }

    int getsize() {
        if (front == -1 && rear == -1) return 0;
        return rear - front + 1;
    }

    int getfront() {
        if (front == -1 && rear == -1) {
            cout << "Queue is empty" << endl;
            return -1;
        }
        return arr[front];
    }

    int getrear() {
        if (front == -1 && rear == -1) {
            cout << "Queue is empty" << endl;
            return -1;
        }
        return arr[rear];
    }
*/
    void print() {
       cout << "printing queue" << endl;
       for(int i=0;i<size;i++){
           cout << arr[i] << " ";

        }
        cout << endl;
    }
     /* cout << "Queue elements: ";
        if (front <= rear) {
            for (int i = front; i <= rear; i++) {
                cout << arr[i] << " ";
            }
        } else {
            for (int i = front; i < size; i++) {
                cout << arr[i] << " ";
            }
            for (int i = 0; i <= rear; i++) {
                cout << arr[i] << " ";
            }
        }
        cout << endl;
    }*/
};

int main() {
    CQueue q(5);
    q.print();
    return 0;
}
