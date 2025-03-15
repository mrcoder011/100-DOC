#include <iostream>
#include <queue>
using namespace std;

class CQueue {
public:
    int *arr;
    int size;
    int front;
    int rear;
    CQueue(int size ){
        arr = new int [size];
        this->size = size ;
        front = -1 ;
        rear = -1;


    }
    void push(int val){
        // overflow condition
        // empty condition
       
        // circular condition
 // normal condition

 if (front == 0 && rear == size -1 ){
    cout << "Queue is full" << endl;
    return;

 }
 else (front == -1 && rear == -1){
     front++
     rear++
     arr[rear] = val;
    }
    else if  ( rear == size -1 && front != 0){
        rear = 0;
        arr[rear ] = val;

    }
    else {
        rear++;
        arr[rear] = val;
    }
    }
    void pop(){
        // underflow 
// empty condition
// circular condition
// normal condition
if (front == -1 && rear == -1){
    cout << "Queue is empty" << endl;
    return;
}
else if (front == rear ){
    
}
        //
    }

}
int main(){

}