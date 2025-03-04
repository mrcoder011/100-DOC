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
class Solution {
    public:
        ListNode* reverseKGroup(ListNode* head, int k) {
            if (head == NULL || head->next == NULL)
                return head;
    
            // Check if there are at least k nodes to reverse
            ListNode* temp = head;
            int count = 0;
            while (temp != NULL && count < k) {
                temp = temp->next;
                count++;
            }
            if (count < k) 
                return head;  // If less than k nodes, return the head as is
    
            // Reverse k nodes
            ListNode* prev = NULL;
            ListNode* curr = head;
            ListNode* nextNode = NULL;
            int pos = 0;
    
            while (pos < k && curr != NULL) {
                nextNode = curr->next;
                curr->next = prev;
                prev = curr;
                curr = nextNode;
                pos++;
            }
    
            // Recursively reverse the next part and connect
            head->next = reverseKGroup(curr, k);
    
            // Return the new head of the reversed group
            return prev;
        }
    };
    