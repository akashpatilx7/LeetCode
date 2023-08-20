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
    // Time Complexity : O(N) & Space Complexity : O(N)


    // helper function for Inorder Traversal 
    void solve(TreeNode* root, vector<int>&ans){
        if(root==NULL){
            return;
        }

        // recursive case
        solve(root->left, ans);
        ans.push_back(root->val);

        // including right nodes also 
        solve(root->right,ans);
    }

    // helper function for creating a new tree from Inorder Traversal
    TreeNode* newTree(vector<int>&ans, int i,int &n){
        if(i==n){
            return NULL;
        }

        // creating a temp pointer to traverse the tree
        TreeNode* temp=new TreeNode(ans[i]);
        temp->left=NULL;
        temp->right=newTree(ans, i+1, n);
        return temp;
    }

    TreeNode* increasingBST(TreeNode* root) {
        vector<int>ans;
        solve(root, ans);
        int n=ans.size();

        // rearranging & returning the tree
        return newTree(ans, 0, n);
    }
};