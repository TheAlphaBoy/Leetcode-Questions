class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {

        priority_queue<int>maxHeap;
        int m = matrix.size();
        int n = matrix[0].size();

        for(int i=0;i<m;++i){
            int j=0;
            while(j<n){
                maxHeap.push(matrix[i][j]);
                ++j;
                if(maxHeap.size()>k){
                    maxHeap.pop();
                }
            }
        }
        return maxHeap.top();
    }
};