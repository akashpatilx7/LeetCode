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
    bool isBalanced(TreeNode* root) {
        // Time Complexity : O(N) & Space Complexity : O(N)

        // if the tree is balanced, return its height
        return maxDepth(root)!=-1;
    }

    int maxDepth(TreeNode* root){
        if(root==NULL){
            return 0;
        }

        int leftHeight=maxDepth(root->left);
        // extra part
        if(leftHeight==-1){
            return -1;
        }

        int rightHeight=maxDepth(root->right);
        // extra part
        if(rightHeight==-1){
            return -1;
        }

        bool leftPart=isBalanced(root->left);
        bool rightPart=isBalanced(root->right);

        // extra part (condition for balanced binary tree)
        if(abs(leftHeight-rightHeight)>1){
            return -1;
        }
        return 1+max(leftHeight,rightHeight);
    }
};