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
    vector<int> inorderTraversal(TreeNode* root) {
        // Time Complexity : O(N) & Space Complexity :O(N) (remove from the stack & push it into inorder)
        
        vector<int>inorder;

        stack<TreeNode*>st;
        TreeNode* node=root; // for traversal of the tree

        while(true){
            if(node!=NULL){
                // push it into stack 
                st.push(node);

                // update the node
                node=node->left;
            }

            else{
                // check if traversal of tree is finished
                if(st.empty()==true){
                    break;
                }

                // update the node (LEFT)
                node=st.top();
                st.pop();

                // ROOT
                inorder.push_back(node->val);

                // update the node (RIGHT)
                node=node->right;
            }
        }
        return inorder;
    }
};