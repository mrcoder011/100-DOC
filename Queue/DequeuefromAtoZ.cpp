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
        
    }
};