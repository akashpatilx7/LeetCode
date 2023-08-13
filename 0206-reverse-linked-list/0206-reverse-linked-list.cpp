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
    ListNode* reverseList(ListNode* head) {
        // ITERATIVE APPROACH : // Time Complexity : O(N) & Space Complexity : O(1)


        ListNode* temp=NULL;

        while(head!=NULL){
            // ListNode* next_node=new ListNode();     (In this step, only the next_node is created. It's position is still undefined !)

            // Defining the next in Original Linked List as currently UNDEFINED
            ListNode* next_node=head->next;

            // Arrow Reverse Step
            head->next=temp;

            temp=head;
            head=next_node;
        }
        return temp;
    }
};