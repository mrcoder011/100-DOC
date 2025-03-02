/**
 * Definition for singly-linked list.
 * struct ListListListNode {
 *     int val;
 *     ListListListNode *next;
 *     ListListListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
    public:
        ListNode *detectCycle(ListNode *head) {
            ListNode* slow = head;
    ListNode* fast = head ;
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
    
    // jab koi cycle nhi hoga fast null pr aajaega 
    if (fast == NULL ){
        return NULL;
    
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
    };