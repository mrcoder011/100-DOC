#include <iostream>
using namespace std;

class Deque {   
    public:
    int *arr;
    int size;
    int front;
    int rear;

    Deque(int size){
        arr = new int[size];
        this->size = size;
        front = -1;
        rear = -1;

    }
    void PushFront(int val){
    // Overflow condition
    // empty condition  
    // normal condition
    if (front == 0 && rear == size -1 ){
        cout << "queue is full" << endl;
        return;
    }
    else if (front == -1 && rear == -1 ){
        front++;
        rear++;
        arr[front] = val;


    }
    else {
        // rear ke case me rear ko aage laate h or phir insert krte h 
        // front ke case me front ko piche laate h or phir insert krte h

        front--;
        arr[front] = val;

    }

    

    }
    void PushBack(int val){
    // Overflow condition
    // empty condition
    // normal condition
    if (rear == size -1){
        cout << "Queue is full" << endl;
        return;
    }
    else if(front == -1 && rear == -1 ){
        front++;
        rear++;
        arr[rear] = val;

    }
    else {
rear++;
arr[rear] = val;

    }
    }
    void PopFront(){
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
    void PopBack(){
    
    }
};