#include <iostream>
using namespace std;

class node {
public:
    int data;
    node *next;

    node() { // Default constructor
        this->next = NULL;
    }

    node(int data) { // Parameterized constructor
        this->data = data;
        this->next = NULL;
    }
};

// Function to print the linked list
void printLL(node* head) {
    node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

// Function to get the length of the linked list
int getlength(node* head) {
    node* temp = head;
    int count = 0;
    while (temp != NULL) {
        count++;
        temp = temp->next;
    }
    return count;
}

// Function to insert at the head of the linked list
void inserthead(node* &head, node* &tail, int data , int position) {
    node* newnode = new node(data);

    if (head == NULL) { 
        // If the linked list is empty, head and tail both should point to the new node
        head = newnode;
        tail = newnode;
    } else {
        // Insert at the head
        newnode->next = head;
        head = newnode;
    }
    node * newnode = new node(data);
    node*prev = NULL;
    node*curr = head;
    while(position != 1){
        prev = curr ;
        curr = curr-> next;
        position --;

    } 
    prev -> next = newnode;
    newnode -> next = curr;


}

int main() {
    // Creating nodes
    node* first = new node(10);
    node* second = new node(20);
    node* third = new node(30);
    node* fourth = new node(40);
    node* fifth = new node(50);

    // Linking nodes
    first->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;

    node* head = first;
    node* tail = fifth; // The last node is the tail

    cout << "Printing the entire linked list: " << endl;
    printLL(head);

    cout << "Length of linked list: " << getlength(head) << endl;

    // Inserting at head
    inserthead(head, tail, 50 , 0);
    cout << "After inserting 500 at the head: " << endl;
    printLL(head);

    return 0;
}
