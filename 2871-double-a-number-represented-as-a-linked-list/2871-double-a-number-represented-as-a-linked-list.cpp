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
    // defining a function to return the carry 
    int returnCarry(ListNode* head){
        // BASE CONDITION
        if(head==NULL){
            return 0;     // no carry
        }
        
        // RECURSIVE CONDITION
        int value=head->val * 2 + returnCarry(head->next);
        head->val=value%10;     // carry
        return value/=10;
    }
    
    ListNode* doubleIt(ListNode* head) {
        // RECURSIVE APPROACH
        // Time Complexity : O(N) & Space Complexity : O(N)

        // defining the 'carry' variable (returned by the returnCarry function) inside the main function only!
        int carry=returnCarry(head);
        
        // creating a new node to store the existing carry of the first node
        if(carry){
            head=new ListNode(carry,head);
        }
        
        return head;
    }
};