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
    ListNode* oddEvenList(ListNode* head) {
        // Time Complexity : O(N) & Space Complexity : O(1)

        // linkedlist has 0/1/2 nodes 
        if(head==NULL || head->next==NULL || head->next->next==NULL){
            return head;
        }

        ListNode* odd=head;
        ListNode* even=head->next;
        ListNode* oddHead=head;
        ListNode* evenHead=head->next;

        while(even!=NULL && even->next!=NULL){
            odd->next=odd->next->next; // linkedlist having odd positioned nodes

            even->next=even->next->next; // linkedlist having even positioned nodes

            odd=odd->next;
            even=even->next;
        }

        // join the tail of odd linkedlist to the head of the even linkedlist
        odd->next=evenHead; // NOTE : evenHead & not even will be the first element in the even linkedlist !

        return head;
    }
};