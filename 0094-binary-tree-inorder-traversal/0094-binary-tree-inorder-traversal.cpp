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

        // Recursive Approach ( you can also use explicit stack Approach)
        vector<int>inorder;

        solve(root,inorder);
        return inorder;     
    }
    void solve(TreeNode* root,vector<int>&inorder){
        // Edge Case
        if(root==NULL){
            return;
        }

        solve(root->left,inorder);
        inorder.push_back(root->val);
        solve(root->right,inorder);
    }
};