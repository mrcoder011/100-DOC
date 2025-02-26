#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node *prev;
    Node *next;

    // Default constructor
    Node() {
        this->prev = NULL;
        this->next = NULL;
    }

    // Parameterized constructor
    Node(int data) {
        this->data = data;
        this->prev = NULL;
        this->next = NULL;
    }
};

// Function to print the linked list
void print(Node *head) {
    Node *temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

// Function to find the length of the linked list
int findLength(Node *head) {
    Node *temp = head;
    int len = 0;
    while (temp != NULL) {
        len++;
        temp = temp->next;
    }
    return len;
}

// Function to insert a node at the beginning (head) of the list
void insertAtHead(Node *&head, Node *&tail, int data) {
    Node *newNode = new Node(data);

    if (head == NULL) { // If the list is empty
        head = newNode;
        tail = newNode;
    } else {
        newNode->next = head;
        head->prev = newNode;
        head = newNode;
    }
}

// Function to insert at the end (tail) of the list
void insertAtTail(Node *&head, Node *&tail, int data) {
    if (head == NULL) {
        Node *newNode = new Node(data);
        head = newNode;
        tail = newNode;
    } else {
        Node *newNode = new Node(data);
        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;
    }
}

// Function to insert at a specific position
void insertAtPosition(Node *&head, Node *&tail, int data, int pos) {
    int len = findLength(head);

    if (head == NULL) {
        Node *newNode = new Node(data);
        head = newNode;
        tail = newNode;
    } else {
        if (pos == 1) {
            insertAtHead(head, tail, data);
        } else if (pos == len + 1) {
            insertAtTail(head, tail, data);
        } else {
            Node *newNode = new Node(data);
            Node *prevNode = NULL;
            Node *currNode = head;
            int tempPos = pos;
            
            while (tempPos > 1) {
                tempPos--;
                prevNode = currNode;
                currNode = currNode->next;
            }

            // Updating pointers
            prevNode->next = newNode;
            newNode->prev = prevNode;
            newNode->next = currNode;
            currNode->prev = newNode;
        }
    }
}

// Function to delete a node at a given position
void deleteNode(Node *&head, Node *&tail, int pos) {
    if (head == NULL) {
        cout << "List is empty, deletion not possible." << endl;
        return;
    }

    int len = findLength(head);

    // Case 1: If there's only one node
    if (head == tail) {
        delete head;
        head = NULL;
        tail = NULL;
        return;
    }

    // Case 2: Deleting the first node
    if (pos == 1) {
        Node *temp = head;
        head = head->next;
        head->prev = NULL;
        delete temp;
        return;
    }

    // Case 3: Deleting the last node
    if (pos == len) {
        Node *prevNode = tail->prev;
        prevNode->next = NULL;
        delete tail;
        tail = prevNode;
        return;
    }

    // Case 4: Deleting from the middle
    Node *prevNode = NULL;
    Node *currNode = head;
    int tempPos = pos;

    while (tempPos > 1) {
        tempPos--;
        prevNode = currNode;
        currNode = currNode->next;
    }

    Node *nextNode = currNode->next;
    prevNode->next = nextNode;
    nextNode->prev = prevNode;

    delete currNode;
}

int main() {
    Node *head = NULL;
    Node *tail = NULL;

    // Insert elements at the head
    insertAtHead(head, tail, 40);
    insertAtHead(head, tail, 30);
    insertAtHead(head, tail, 20);
    insertAtHead(head, tail, 10);

    // Print the list
    cout << "Doubly Linked List: ";
    print(head);

    // Find and print the length of the list
    cout << "Length of List: " << findLength(head) << endl;

    // Insert at tail
    insertAtTail(head, tail, 1000);
    print(head);

    // Insert at position
    insertAtPosition(head, tail, 120, 3);
    print(head);

    // Delete node at position
    deleteNode(head, tail, 2);
    print(head);

    return 0;
}
