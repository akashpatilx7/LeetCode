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
    ListNode* sortList(ListNode* head) {
        // Time Complexity : O(NlogN) & Space Complexity : O(1)

        // linkedlist has 0/1 nodes
        if(head==NULL || head->next==NULL){
            return head;
        }

        ListNode* fast=head;
        ListNode* slow=head;
        ListNode* temp=NULL;

        // middle of the linkedlist
        while(fast!=NULL && fast->next!=NULL){
            temp=slow;
            fast=fast->next->next;
            slow=slow->next;
        }

        // pointing the last of the first half linkedlist to NULL
        temp->next=NULL;

        // creating two sorted linkedlists
        ListNode* ll1=sortList(head);
        ListNode* ll2=sortList(slow);

        // merging two sorted linkedlists
        return mergeList(ll1,ll2);
    }

    ListNode* mergeList(ListNode* h1, ListNode* h2){
        ListNode* fh=NULL;
        ListNode* ft=NULL;

        while(h1!=NULL && h2!=NULL){
            if(fh==NULL && ft==NULL){
                // adding the first node to the sorted linkedlist
                if(h1->val<h2->val){
                    fh=h1;
                    ft=h1;
                    h1=h1->next;
                }

                else{
                    fh=h2;
                    ft=h2;
                    h2=h2->next;
                }
            }

            if(h1!=NULL && h2!=NULL){
                if(h1->val<h2->val){
                    ft->next=h1;
                    ft=ft->next;
                    h1=h1->next;
                }

                else{
                    ft->next=h2;
                    ft=ft->next;
                    h2=h2->next;
                }
            }
        }

        if(h1==NULL){
            ft->next=h2;
        }

        if(h2==NULL){
            ft->next=h1;
        }

        return fh;
    }
};