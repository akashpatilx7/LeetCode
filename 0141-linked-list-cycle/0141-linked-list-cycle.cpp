/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        // Time Complexity : O(N) & Space Complexity : O(1) 

        // LL has 0/ 1 Nodes
        if(head==NULL || head->next==NULL){
            return false;
        }

        // LL has more than 1 Nodes
        ListNode* fast=head;
        ListNode* slow=head;

        // untill we reach at the last or 2nd last node
        while(fast->next!=NULL && fast->next->next!=NULL){
            // move the pointers
            fast=fast->next->next;
            slow=slow->next;

            // compare
            if(fast==slow){
                return true;
            }
        }
        return false;
    }
};