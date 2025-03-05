#include <iostream>
using namespace std;

class stack{
    public:
    int *arr;
    int size;
    int top ;

stack(int size ){
    arr = new int[size];
    this->size = size ;
    this->top = -1;

}
void push(int data){
    if (top == size -1){
        cout<< "stack completly full OVERFLOW "<< endl;


    }
    else{
        top++;
        arr[top] = data;
         
    }
   
}
void pop(){
     if(top == -1){
        cout<< "no element stack empty  "<< endl;

     }
     else{
        top--;
     }

}
bool isempty(){
    if(top == -1){
        return true;

    }
    else{
        return false;

    }
}
int gettop(){
    if(top == -1){
        cout<< "no element stack empty  "<< endl;

    }else{
return arr[top];
    }
    

}
int getsize(){
return top+1;

}
void print(){
    cout<< "stack:";
    for (int i = 0 ; i <getsize(); i++){
        cout<< arr[i] << endl;
        cout<< endl;

    }
}

};
int main(){

stack st(8);

    return 0;

}