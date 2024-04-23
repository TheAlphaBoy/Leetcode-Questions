class Solution {
public:

    // sol 1 : Recursive Approach
    // TC => O(2^N)
    // SC => O(N), system(or auxilary) space

    // int climbStairs(int n) {
    //     // BC 
    //     if(n==0 || n==1){
    //         return 1;
    //     }
    //     int step1 = climbStairs(n-1);
    //     int step2 = climbStairs(n-2);
    //     return step1 + step2;
    // }

    // sol 2 : DP (using Tabulation method)
    // TC => O(N)
    // SC => O(N)

    int climbStairs(int n) {

        // creating 1D DP
        vector<int>dp(n+1,0);

        dp[0] = 1;
        dp[1] = 1;

        for(int i=2;i<n+1;++i){
            int step1 = dp[i-1];
            int step2 = 0;
            if(i-2>=0){
                step2 = dp[i-2];
            }
            dp[i] = step1 + step2;
        }
        return dp[n];
    }

};