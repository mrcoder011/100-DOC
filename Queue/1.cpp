#include <iostream>
#include<queue>
using namespace std;
class Queue{
public : 
int *arr ;
int size ;
int front ;
int rear ;

queue(int size ){
    arr = new int[size];
    this-> size = size ;
    front = -1;
    rear = -1;

}
void push(int val ){
    if (rear == size -1 ){
        cout << "Queue is full"<<endl;
        return ;
    }
    else if(front == -1 && rear == -1 ){
        front ++;
        rear ++;
        arr[rear] = val;
        


    }
    else{
        // noramla case 
        rear ++;
        arr[rear] = val;


    }
   
    }
     void pop() {
        if (front == -1 && rear == -1 ){
            cout << "queue is empty"<<endl;
            return ;

        }
        else if (front == rear ){
            arr[front] = -1;
            front = -1;
            rear = -1;


        }
        else{
            arr[front] = -1;
            front ++;
        }
 bool isempty() {
    if (front == -1 && rear == -1 ){
        return true ;
     
 }
    else {
            return false ;
            
        }
    }
    int getsize(){
        return rear - front + 1;
    }
    int getfront(){
        if (front == -1 && rear == -1 ){
            cout << "queue is empty"<<endl;
            return -1;
        }
        else{
  return arr[front];
        }
      
    }
    void print(){
        cout << "queue elements is :"<< endl;
        for (int i= 0 ; i< size ; i++){
            cout << arr[i]<< " " << endl;

        }
        cout << endl;

    }
}
};
int main(){
    queue q(5);
    q.print();

    // this back element is also known as rear and last elements
    
    return 0;
};