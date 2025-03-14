#include <iostream>
#include<queue>
using namespace std;
class queue{
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
    }
 bool isempty {
    if (front == -1 && rear == -1 ){
        return true ;
     
 }
    else {
            return false ;
            
        }
    }
    bool getsize(){
        return rear - front + 1;
    }
}
};
int main(){
    queue<int> q;  
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    cout<<q.front()<<endl;
    q.pop();
    cout<<q.front()<<endl;
    cout<<q.size()<<endl;
    //cout<<q.empty()<<endl;
    cout<<q.back()<<endl; // this back element is also known as rear and last elements
    
    return 0;
}