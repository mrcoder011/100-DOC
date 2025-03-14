#include <iostream>
#include <queue>
using namespace std;

class Queue {
public:
    int *arr;
    int size;
    int front;
    int rear;

    Queue(int size) {
        arr = new int[size];
        this->size = size;
        front = -1;
        rear = -1;
    }

    void push(int val) {
        if (rear == size - 1) {
            cout << "Queue is full" << endl;
            return;
        } 
        else if (front == -1 && rear == -1) {
            front++;
            rear++;
            arr[rear] = val;
        } 
        else {
            rear++;
            arr[rear] = val;
        }
    }

    void pop() {
        if (front == -1 && rear == -1) {
            cout << "Queue is empty" << endl;
            return;
        } 
        else if (front == rear) {
            arr[front] = -1;
            front = -1;
            rear = -1;
        } 
        else {
            arr[front] = -1;
            front++;
        }
    }

    bool isempty() {
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
    int getrear(){
        if(front == -1 && rear == -1){
            cout << "Queue is empty" << endl;
            return -1;
        }
cout<< arr[rear];

    }

    void print() {
        if (isempty()) {
            cout << "Queue is empty" << endl;
            return;
        }
        cout << "Queue elements: ";
        for (int i = front; i <= rear; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    Queue q(5);

    q.print();
    q.push(10);
    q.print();
    q.push(20);
    q.print();
    q.push(30);
    q.print();      
    q.push(40);
    q.print();
    q.push(50);
    q.print();
   cout << "size "<< q.getsize() << endl;
   q.pop();
    q.print();
cout << "after size "<< endl;

   cout << "size "<< q.getsize() << endl;
   cout << "queue is empty or not"<< " "<<q.isempty()<< endl;
   q.push(60);
    q.print();
        q.pop();
    q.print();
    q.pop();
    q.print();  
    q.pop();
    q.print();
    q.pop();
    q.print();                                                                  
    q.pop();
    q.print();
    cout << q.getfront() << endl;


    return 0; 
}
