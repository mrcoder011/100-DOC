#include <iostream>
#include <stack>
using namespace std;

class Stack{
    public:
    int *arr;
    int size;
    int top1;
    int top2;

    stack(int size){
        arr = new int[size];
        this->size = size;
        top1 = -1;
        top = size;

    }
    void push1(int data){
        if(top2-top1){
            cout<< "overflow"<< endl;

        }
top1++;
arr[top1]= data ;


    }
    void push2(int data){
        if(top2-top1 == 1){
            cout<< "overflow"<< endl;

        }
        top2--;
        arr[top2]


    }
    void pop1(int data){
        if(top1 == -1){
            cout<< "underflow"<< endl;

        }
arr[top1] = 0;
top-- ;


    }
    void pop2(int data){
        if(top2 == size){
            cout<< "underflow"<< endl;
            
        }
        arr[top2] = 0;
        top2++;




    }

}

int main(){

}