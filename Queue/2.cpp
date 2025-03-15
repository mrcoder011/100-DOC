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
    }
}
int main(){

}