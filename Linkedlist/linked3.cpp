 /**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
/*class Solution {
    public:
        ListNode* reverseList(ListNode* head) {
            ListNode* prev = NULL;
            ListNode* curr = head;
            while(curr != NULL){
                ListNode* nextNode = curr->next;
                curr-> next = prev;
                prev = curr;
                curr = nextNode;
    
    
            }
            return prev;
            
        }
    };
    */
   class Solution {
    public:
        // Helper function for recursion
        ListNode* reverseUsingRecursion(ListNode* prev, ListNode* curr) {
            if (curr == NULL) {
                return prev; // Base case: return new head (last node)
            }
            
            ListNode* nextNode = curr->next; // Store next node
            curr->next = prev; // Reverse current node's pointer
            
            // Recursive call for the next node
            return reverseUsingRecursion(curr, nextNode);
        }
    
        ListNode* reverseList(ListNode* head) {
            return reverseUsingRecursion(NULL, head);
        }
    };
    