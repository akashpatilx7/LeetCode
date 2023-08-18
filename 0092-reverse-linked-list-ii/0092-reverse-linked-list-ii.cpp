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
    ListNode* reverse(ListNode* head){
        // Time Complexity : O(N) & Space Complexity : O(1)
        ListNode* prev=NULL;
        ListNode* curr=head;
        ListNode* next=NULL;

        // use curr pointer to traverse the linkedlist instead of head
        while(curr!=NULL){
            next=curr->next;
            curr->next=prev;

            prev=curr;
            curr=next;
        }
        return prev;
    }
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        ListNode* curr=head;
        ListNode* prev=NULL;
        int count=1;

        while(count!=left){
            prev=curr;
            curr=curr->next;
            count++;
        }
        // prev pointer stopped updating here

        ListNode* start=curr;

        while(count!=right){
            curr=curr->next;
            count++;
        }

        ListNode* rest=curr->next;

        // separating the rest from the targeted linkedlist
        curr->next=NULL;

        ListNode* newHead=reverse(start);

        if(prev!=NULL){
            prev->next=newHead;
        }

        curr=newHead;
        while(curr->next!=NULL){
            curr=curr->next;
        }
        curr->next=rest;

        if(left==1){
            return newHead;
        }

        else{
            return head;
        }
    }
};