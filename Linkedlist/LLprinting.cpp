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
void inserthead(node* &head, int data){
    if (head == NULL){
        node * newnode = new node(data);
        head = newnode;

    }
    else{
    // create node 
    node*newnode= new node(data);
    //attach new node to head node
     newnode -> next = head ;
     // update head 
     head = newnode;
    }
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
inserthead ( head , 500);
printLL(head);

    return 0;

}

