class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        int N = grid.size(), M = grid[0].size();
        vector<vector<int>> dp(N+1, vector<int>(M+1, INT_MAX) );
        dp[0][1] = 0;

        for(int i = 1; i < N+1; i++) {
            for(int j = 1; j < M+1; j++) {
                dp[i][j] = grid[i-1][j-1] + min(dp[i-1][j], dp[i][j-1]);
            }
        }
        return dp[N][M];
    }
};