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
    int maxDepth(TreeNode* root) {

        // We can solve this question in Two way,first is using recursion and other is using
        // level order both of then have pro's and con's , so we can use any of one way , 
        // generally if a tree is more skewed then we avoid using recursive approach , while 
        // if tree have more leaf nodes then we avoid using level order because the queue 
        // will be taking more memmory compare to recursive

        // for both solutions, the TC => O(N) and SC=> O(N)

        // Sol 1 : Recursive Approach

        // // base condition 
        // if(root==NULL){
        //     return 0;
        // }
        // // hypothesis
        // int left=maxDepth(root->left);
        // int right=maxDepth(root->right);
        
        // // Induction
        // return (1+(max(left,right)));

        // sol 2 : Using Level order Traversal approach

        int depth = 0;
        // Edge case
        if(root==NULL){
            return depth;
        }
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){

            int size=q.size();
            depth++;
            for(int i=0;i<size;i++){
                TreeNode* node = q.front();
                q.pop();
                if(node->left != NULL){
                    q.push(node->left);
                }
                if(node->right != NULL){
                    q.push(node->right);
                }
            }
        }
        return depth;
    }
};















