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

        vector<int>preorder;
        // Edge case
        if(root==NULL){
            return preorder;
        }
        stack<TreeNode*>s;
        s.push(root);
        while(!s.empty()){
            TreeNode* topnode=s.top();
            s.pop();
            preorder.push_back(topnode -> val);
            if(topnode->right!=NULL){
                s.push(topnode->right);
            }
            if(topnode->left!=NULL){
                s.push(topnode->left);
            }
        }
        return preorder;
    }
};