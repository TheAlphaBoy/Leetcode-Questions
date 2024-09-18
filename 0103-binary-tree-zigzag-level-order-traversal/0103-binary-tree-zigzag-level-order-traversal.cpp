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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector <vector <int>> v;
        if(root == NULL)
            return v;
      
        queue <TreeNode *> q;
        q.push(root);
        bool changeDirection = true;
      
        while(!q.empty()) {
            vector <int> v1;
            int siz = q.size();
          
            for(int i = 0 ; i < siz ; i++) {
                if(changeDirection)
                    v1.push_back(q.front() -> val);
                else 
                    v1.insert(v1.begin(), q.front() -> val);
              
                if(q.front() -> left != NULL)
                    q.push(q.front() -> left);
                if(q.front() -> right != NULL)
                    q.push(q.front() -> right);
              
                q.pop();
            }
            changeDirection = !changeDirection;
            v.push_back(v1);
        }
        return v;
    }
};