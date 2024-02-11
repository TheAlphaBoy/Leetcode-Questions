class Solution {
public:
    vector<vector<int>> modifiedMatrix(vector<vector<int>>& matrix) {
        
        int m=matrix.size();
        int n=matrix[0].size();
        vector<vector<int>>ans=matrix;
        vector<int>maxcol(n,INT_MIN);
        for(int j=0;j<n;j++){
            for(int i=0;i<m;i++){
                maxcol[j]=max(maxcol[j],matrix[i][j]);
            }
        }
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(matrix[i][j]==-1){
                    ans[i][j]=maxcol[j];
                }
            }
        }
        return ans;
        
    }
};