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

// Sol 1 : Using DFS
// TC => O(No. of Nodes) + O(length of curr) ~ O(N)
// SC=> O(1) , No extra space

string ans="";

void dfs(TreeNode* root,string curr){
    // BC 
    if(!root){
        return;
    }
    curr = char(root->val + 'a') + curr; // TC => O(length of curr) ~ O(N)
    if(!root->left && !root->right){
        if(ans=="" || ans>curr){
            ans = curr;
        }
        return;
    }
    dfs(root->left,curr);
    dfs(root->right,curr);
}
    string smallestFromLeaf(TreeNode* root) {

        dfs(root,"");
        return ans;
        
    }
};