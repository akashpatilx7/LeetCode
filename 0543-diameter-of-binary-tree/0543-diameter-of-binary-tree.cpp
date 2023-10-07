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
        // Time Complexity : O(N*N) & Space Complexity : O(N)

        if(root==NULL){
            return 0;
        }

        int leftHeight=maxDepth(root->left);
        int rightHeight=maxDepth(root->right);

        return 1+max(leftHeight,rightHeight);
    }

    // IMP step
    int maxi=0;

    int diameterOfBinaryTree(TreeNode* root) {
        // DIAMETER OF A BINARY TREE : longest path between any two nodes which does not need to pass via root

        if(root==NULL){
            return 0;
        }

        int leftHeight=maxDepth(root->left);
        int rightHeight=maxDepth(root->right);

        maxi=max(maxi,leftHeight+rightHeight);

        int leftPart=diameterOfBinaryTree(root->left);
        int rightPart=diameterOfBinaryTree(root->right);

        return maxi;
    }
};