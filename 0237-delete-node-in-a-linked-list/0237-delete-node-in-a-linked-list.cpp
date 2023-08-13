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
    void deleteNode(ListNode* node) {
        // NOTE : For completely deleting a particular given node from the LL, you "must" have access to the head of the LL !

        // Time Complexity : O(1) & Space Complexity : O(1)

        node->val=node->next->val; // will work always as the node to be deleted is not a Tail Node.

        node->next=node->next->next;
    }
};