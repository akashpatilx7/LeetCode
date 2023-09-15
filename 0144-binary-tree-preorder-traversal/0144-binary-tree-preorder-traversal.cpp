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
    void preorder(TreeNode* root,vector<int>&ans){
        // Time Complexity : O(N) & Space Complexity : O(N)
        
        if(root==NULL){
            return;
        }

        else{
            ans.push_back(root->val);
            preorder(root->left,ans);
            preorder(root->right,ans);
        }
    }

    vector<int> preorderTraversal(TreeNode* root) {
        vector<int>ans;
        // a helper function, having root & vector as parameters
        preorder(root,ans); 
        return ans;        
    }
};