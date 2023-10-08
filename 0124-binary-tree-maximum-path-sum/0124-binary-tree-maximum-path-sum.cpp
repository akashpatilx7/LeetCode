/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int maxPathDown(TreeNode* node, int& maxi){
        // Time Complexity : O(N) & Space Complexity : O(N)

        if(node==NULL){
            return 0;
        }

        int leftHeight=max(0,maxPathDown(node->left,maxi));
        int rightHeight=max(0,maxPathDown(node->right,maxi));

        maxi=max(maxi,node->val+leftHeight+rightHeight);

        return node->val+max(leftHeight,rightHeight);
    }

    int maxPathSum(TreeNode* root) {
        // In a path, every node appears only once
        // On every node, whichever is the longest path is what we return
        // Do not consider a negative path sum, instead say, we will take a zero (Taking a negative path will never give me maximum path sum, instead ignoring those negative path sum will give!)

        // int maxi=0
        int maxi=INT_MIN;
        maxPathDown(root,maxi);
        return maxi;
    }
};