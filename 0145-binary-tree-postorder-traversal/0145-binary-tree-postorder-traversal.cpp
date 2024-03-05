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

// Sol 1 : Recursive Approach

    // vector<int> postorderTraversal(TreeNode* root) {

    //     vector<int>postorder;

    //     solve(root,postorder);
    //     return postorder;        
    // }
    // void solve(TreeNode* root,vector<int>&postorder){
    //     //  Edge case
    //     if(root==NULL){
    //         return;
    //     }

    //     solve(root->left,postorder);
    //     solve(root->right,postorder);
    //     postorder.push_back(root->val);
    // }

    // Sol 2 : Using 2 Stack Approach

    // vector<int> postorderTraversal(TreeNode* root) {

    //     vector<int>postorder;
    //     // Edge case
    //     if(root == NULL){
    //         return postorder;
    //     }
    //     stack<TreeNode*>s1,s2;
    //     s1.push(root);
    //     while(!s1.empty()){
    //         TreeNode* topnode = s1.top();
    //         s1.pop();
    //         s2.push(topnode);
    //         if(topnode->left!=NULL){
    //             s1.push(topnode->left);
    //         }
    //         if(topnode->right!=NULL){
    //             s1.push(topnode->right);
    //         }
    //     }
    //     while(!s2.empty()){
    //         postorder.push_back(s2.top()->val);
    //         s2.pop();
    //     }
    //     return postorder;
    // }

    // Sol 3 : Using only 1 stack TC = O(2N) & SC = O(N)

    vector<int> postorderTraversal(TreeNode* root) {

        vector<int>postorder;
        // Edge case
        if(root==NULL){
            return postorder;
        }

        stack<TreeNode*>s;
        TreeNode* curr=root;
        while(!s.empty() || curr!=NULL){
            if(curr!=NULL){
                s.push(curr);
                curr = curr->left;
            }
            else{
                TreeNode* temp=s.top()->right;
                if(temp==NULL){
                    temp=s.top();
                    s.pop();
                    postorder.push_back(temp->val);
                    while(!s.empty() && temp==s.top()->right){
                        temp=s.top();
                        s.pop();
                        postorder.push_back(temp->val);
                    }
                }
                else{
                    curr=temp;
                }
            }
        }
        return postorder;

    }

};