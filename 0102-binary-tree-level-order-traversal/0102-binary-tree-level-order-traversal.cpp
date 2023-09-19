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
    vector<vector<int>> levelOrder(TreeNode* root) {
        // Time Complexity : O(N) & Space Complexity : O(N)

        // declaring a vector of vectors to return the level order traversal of a binary tree
        vector<vector<int>>ans;
        
        if(root==NULL){
            return ans;
        }

        // declaring a queue
        queue<TreeNode*>q;
        // initialising the queue with a root node
        q.push(root);

        while(!q.empty()){
            int size=q.size();

            // declaring a vector for storing the tree nodes at a particular level
            vector<int>level;

            for(int i=0;i<size;i++){
                TreeNode* node=q.front();
                q.pop();

                if(node->left!=NULL){
                    q.push(node->left);
                }

                if(node->right!=NULL){
                    q.push(node->right);
                }

                level.push_back(node->val);
            }
            ans.push_back(level);
        }
        return ans;
    }
};