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
    if (front == 0 && rear == size -1 || rear == front -1){
        cout << "queue is full" << endl;
        return;
    }
    else if (front == -1 && rear == -1 ){
        front++;
        rear++;
        arr[front] = val;


    }
    else if (front == 0 && rear != size -1){
        front = size -1;
        arr[front ] = val;

        
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
    else if (rear == size -1 && front != 0){
        rear = 0;
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
        // Underflow condition
//single element condition
// normal condition 
if (front == -1 && rear == -1 ){
    cout<< "queue is empty" << endl;
    return;
}
else if (rear ==0){
    arr[rear] = -1;
    rear = size -1;  

}
if (front == rear){
    arr[rear ] = -1;
    front = -1 ;
    rear = -1 ;

    
    }
    else 
    {
        arr[rear] = -1; // remove kr dia and then piche le aaya  rear ko

        rear --;

    }
    else if {
 if (front == size -1){
    front = 0;
    }
};
};
void print(){
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
    dq.PushBack(60);
    dq.PushFront(70);
    dq.PushFront(80);
    dq.PushFront(90);
    dq.PushFront(100);
    return 0;
}