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

    bool isBalanced(TreeNode* root) {

        // Sol 1 : Recursive solution O(N*N)

        // Ref : https://youtu.be/PlpfA6-Ga5A?si=PMuyBG4H7wHr7s4F

        int height = 1;
        bst(root,height);
        if(height) return true;
        return false;
}
int bst(TreeNode* root,int &height){
    // BC
    if(root==NULL){
        return 0;
    }
    int leftHeight = bst(root->left,height)+1;
    int rightHeight = bst(root->right,height)+1;
    if(abs(leftHeight-rightHeight)>1){
        height=0;
    }
    return max(leftHeight,rightHeight);
}
    

// Ref : https://leetcode.com/problems/balanced-binary-tree/solutions/4343377/using-dp-on-trees-aditya-verma-template-beats-95

    // int solve(TreeNode* root,bool &ans){
    //     // BC
    //     if(root==NULL){
    //         return 0;
    //     }
    //     // Hypothesis
    //     bool lh = solve(root->left,ans);
    //     bool rh = solve(root->right,ans);
    //     // if node doesn't give us ans
    //     int temp = max(lh,rh)+1;
    //     if(abs(lh-rh)>1){
    //         ans = false;
    //         return -1; //return anything
    //     }
        
    //     return temp;
    // }
    // bool isBalanced(TreeNode* root) {

    //     // Using DP on trees
    //     // TC - O(N)

    //     bool ans=true;
    //     solve(root,ans);
    //     return ans;
    // }
    
};