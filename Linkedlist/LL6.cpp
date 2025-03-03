#include <iostream>
using namespace std;
Node* reverse(Node *  &head ){
    Node *prev = NULL;
    Node* curr = Head;
    while (curr != NULL){
        Node*next = curr -> next ;
     curr -> next = prev;
     prev = curr ;
     curr = next

    }
    return  prev;

}
Void addoNE(Node* &head  ){
    // reverse 
    head = reverse(head);


    // add 1
    int carry = 1;
    while (head != NULL){
        int totalsum = 
    }



    // reverse





}
int main() {
    // Creating nodes
    Node*head = NULL ;
    Node *tail = NULL;


//    node* second = new node(20);
 //   node* third = new node(30);
    //node* fourth = new node(40);
    //node* fifth = new node(50);

    // Linking nodes
   /* first->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
*/
    printLL(head);

    return 0;
}