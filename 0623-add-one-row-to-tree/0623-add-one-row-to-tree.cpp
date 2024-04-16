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

// TC => O(N)
// SC => O(1)

TreeNode* solve(TreeNode* root,int val,int depth,int curr_depth){
    // Edge case
    if(!root){
        return NULL;
    }
    if(curr_depth==depth-1){
        TreeNode* left_temp = root->left;
        TreeNode* right_temp = root->right;

        root->left=new TreeNode(val);
        root->right = new TreeNode(val);

        root->left->left = left_temp;
        root->right->right = right_temp;
        return root;
    }
    root->left = solve(root->left,val,depth,curr_depth+1);
    root->right = solve(root->right,val,depth,curr_depth+1);
    return root;
}

    TreeNode* addOneRow(TreeNode* root, int val, int depth) {

        // special condition
        if(depth==1){
            TreeNode* newRoot = new TreeNode(val);
            newRoot->left = root;
            return newRoot;
        }
        int curr_depth=1;
        return solve(root,val,depth,curr_depth);
        
    }
};