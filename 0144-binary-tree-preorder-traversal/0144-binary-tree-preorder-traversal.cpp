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
    vector<int> preorderTraversal(TreeNode* root) {
        // Time Complexity : O(N) & Space Complexity :O(N) (remove from the stack & push it into preorder)

        vector<int>preorder;

        if(root==NULL){
            return preorder;
        }

        // creating a stack & pushing the 1st element in it
        stack<TreeNode*>st;
        st.push(root);

        while(!st.empty()){
            // updating the root
            root=st.top();
            st.pop();

            preorder.push_back(root->val);

            // ROOT->LEFT->RIGHT ----> ROOT->RIGHT->LEFT (due to stack's LIFO property)

            if(root->right!=NULL){
                st.push(root->right);
            }

            if(root->left!=NULL){
                st.push(root->left);
            }
        }
        return preorder;
    }
};