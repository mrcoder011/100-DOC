#include <iostream>
using namespace std;

class node {
public:
    int data;       // Fixed the colon ':' to semicolon ';'
    node *next;

    node() {        // Default constructor
     //   cout << "I am inside this default ctor" << endl;
        this->next = NULL;
    }

    node(int data) {   // Parameterized constructor
       // cout << "I am inside this default ctor" << endl;
        this->data = data;
        this->next = NULL;
    }
};
void printLL(node*head){
    node*temp = head;
    while (temp != NULL){
        cout<< temp->data<< " ->";
        temp = temp ->next;

    }
cout<< endl;

}
int getlength(node*head){
    node*temp = head;
    int count = 0;
    while(temp !=NULL){
count ++;
temp = temp->next;

    }
    return count;

}

int main() {
   // node a;   // This will call the default constructor
    //return 0;
    node * first  = new node(10);
    node * second  = new node(20);
    node * third  = new node(30);
    node * fourth = new node(40); 
    node * fifth  = new node(50); 

    first -> next = second ;
    second -> next = third;
    third -> next = fourth;
    fourth -> next = fifth;
    node*head = first;

cout<< "printing the entire  LL : "<< endl;
printLL(head);
cout<< "length off LL is :" << getlength(head);
    return 0;

}

