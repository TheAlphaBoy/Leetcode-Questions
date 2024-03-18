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

 // Sol 1 : Using Recursive Approach (Naive Approach)
//  Time Complexity: O(N*N) ( For every node, Height Function is called which takes O(N) time hence for every node it becomes N*N ) 

// Space Complexity: O(1) ( Extra Space ) + O(H) ( Recursive Stack Space where “H” is the height of tree )
    
    // int maxi=0;

    // int diameterOfBinaryTree(TreeNode* root) {

    //     // BC
    //     if(!root){
    //         return 0;
    //     }
    //     // Hypothesis Step
    //     int lh = height(root->left);
    //     int rh = height(root->right);

    //     maxi = max(maxi,lh+rh);

    //     // Har ek node ki nikalni hai depth or height
    //     diameterOfBinaryTree(root->left);
    //     diameterOfBinaryTree(root->right);

    //     return maxi;
    // }
    // private :
    // int height(TreeNode* root){

    //     // BC
    //     if(root==NULL){
    //         return 0;
    //     }
    //     int lh=height(root->left);
    //     int rh=height(root->right);
    //     return 1+max(lh,rh);

    // }

    // Sol 2 : Post Order Traversal (TC => O(N) , SC => O(1) + O(H))
    // same solution as of Max height of tree
    // as we traverse only in 1 iteration for both left height and right height

    int diameterOfBinaryTree(TreeNode* root) {

        int diameter=0;
        maxdia(root,diameter);
        return diameter;
    }
    private:
    int maxdia(TreeNode* root,int& diameter){

        // BC
        if(!root){
            return 0;
        }
        int lh=maxdia(root->left,diameter);
        int rh=maxdia(root->right,diameter);

        diameter=max(diameter,lh+rh);
        return 1+max(lh,rh);
    }

};