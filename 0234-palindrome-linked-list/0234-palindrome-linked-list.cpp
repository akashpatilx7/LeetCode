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
    // Time Complexity : O(N/2+N/2+N/2) & Space Complexity : O(1)


    // reversing the linkedlist
    ListNode* reverseList(ListNode* head){
        ListNode* dummy=NULL;

        while(head!=NULL){
            ListNode* nextNode=head->next;

            head->next=dummy;
            dummy=head;
            head=nextNode;
        }
        return dummy;
    }

    bool isPalindrome(ListNode* head) {
        // linkedlist has 0/1 Nodes (linkedlist will always be a palindrome)
        if(head==NULL || head->next==NULL){
            return true;
        }
        
        // middle of the linkedlist
        ListNode* fast=head;
        ListNode* slow=head;

        while(fast->next!=NULL && fast->next->next!=NULL){
            fast=fast->next->next;
            slow=slow->next;
        }

        // the slow pointer is at the middle of the linkedlist
        slow->next=reverseList(slow->next); // attaching the reversed list after the slow pointer

        slow=slow->next;

        while(slow!=NULL){
            if(slow->val!=head->val){
                return false;
            }
            slow=slow->next;
            head=head->next;
        }
        return true;
    }
};