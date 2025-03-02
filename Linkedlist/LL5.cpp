#include <iostream>
using namespace std;

class Node {
public:
Node* slow = head;
Node* fast = head ;
while (fast != NULL){
    fast = fast -> next;
    if(fast != NULL){
        fast = fast -> next;
        slow = slow->next ;

    }
    if(fast == slow){
        break;

    }
}
// yha phucha iska mtlb loop present;
// MAIN ALOGORITHM AND LOGIC;

slow = head ;
while (fast != slow ){
    slow = slow -> next ; 
    fast = fast-> next;

}
return slow ;


}
int main() {
   Node *head = NULL;
   Node *tail = NULL;

   // Insert elements at the head
   insertAtHead(head, tail, 40);
   insertAtHead(head, tail, 30);
   insertAtHead(head, tail, 20);
   insertAtHead(head, tail, 10);
   insertAtTail(head , tail , 77);
   tail -> next = head ->next->next;
}
