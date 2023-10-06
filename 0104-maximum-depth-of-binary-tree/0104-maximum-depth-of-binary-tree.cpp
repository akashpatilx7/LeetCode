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
    int maxDepth(TreeNode* root) {
        // Time Complexity : O(N) & Space Complexity : O(N)

        // WORST CASE : whenever we are given a skew tree, the RECURSIVE traversal will end up taking a stack space equal to the number of nodes in the binary tree

        if(root==NULL){
            return 0;
        }

        int leftHeight=maxDepth(root->left);
        int rightHeight=maxDepth(root->right);

        return 1+max(leftHeight,rightHeight);
    }
};