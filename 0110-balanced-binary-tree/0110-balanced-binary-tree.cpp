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
    int maxDepth(TreeNode* root){
        if(root==NULL){
            return 0;
        }

        int leftHeight=maxDepth(root->left);
        int rightHeight=maxDepth(root->right);

        return 1+max(leftHeight,rightHeight);
    }

    bool isBalanced(TreeNode* root) {
        // Time Complexity : O(N*N) & Space Complexity : O(N)

        if(root==NULL){
            return true;
        }

        // calculate the left & right height for checking balanced binary tree
        int leftHeight=maxDepth(root->left);
        int rightHeight=maxDepth(root->right);

        // condition for balanced binary tree
        if(abs(leftHeight-rightHeight)>1){
            return false;
        }

        // check if the left & right parts are balanced
        bool leftPart=isBalanced(root->left);
        bool rightPart=isBalanced(root->right);

        if(!leftPart || !rightPart){
            return false;
        }
        return true;
    }
};