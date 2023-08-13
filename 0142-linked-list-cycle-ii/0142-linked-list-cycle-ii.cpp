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
    ListNode *detectCycle(ListNode *head) {
        // Time Complexity : O(N) & Space Complexity : O(1)

        // LL has 0/ 1 Nodes 
        if(head==NULL || head->next==NULL){
            return NULL;
        }

        ListNode* fast=head;
        ListNode* slow=head;
        ListNode* entry=head;

        while(fast->next!=NULL && fast->next->next!=NULL){
            fast=fast->next->next;
            slow=slow->next;

            if(fast==slow){
                while(entry!=slow){ // only move the pointers forward, return the "entry" pointer once both the pointers settle at one place
                    entry=entry->next;
                    slow=slow->next;
                }
                return entry;
            }
        }
        return NULL;
    }
};