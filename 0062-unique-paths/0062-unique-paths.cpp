class Solution {
public:

    // Sol 1 : Recursive Approach :
    // int solve(int m,int n,int i,int j){
    //     // BC 
    //     if(i>m || j>n) return 0;
    //     if(i==m-1 || j==n-1) return 1;
    //     else return solve(m,n,i+1,j) + solve(m,n,i,j+1);
    // }

    // int uniquePaths(int m, int n) {

    //     return solve(m,n,0,0);
    // }

    // Memoization Approach : (Optimized)

    int solve(int m,int n,int i,int j,vector<vector<int>>&dp){
        // Base case: if out of bounds
        if (i >= m || j >= n) return 0;
        // Base case: if reach the bottom-right cell
        if (i == m-1 && j == n-1) return 1;
        if(dp[i][j] != -1) return dp[i][j];
        dp[i][j]=solve(m,n,i+1,j,dp) + solve(m,n,i,j+1,dp);
        return dp[i][j];
    }

    int uniquePaths(int m, int n) {

        vector<vector<int>>dp(m, vector<int>(n, -1));
        return solve(m,n,0,0,dp);
    }
};