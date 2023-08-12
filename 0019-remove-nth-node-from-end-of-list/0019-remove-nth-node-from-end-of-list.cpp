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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        // Time Complexity : O(N) & Space Complexity : O(1)

        ListNode* dummy=new ListNode();
        dummy->next=head;

        ListNode* fast=dummy;
        ListNode* slow=dummy;

        while(n--){
            fast=fast->next;
        }

        while(fast->next!=NULL){
            fast=fast->next;
            slow=slow->next;
        }

        slow->next=slow->next->next;

        return dummy->next;
    }
};