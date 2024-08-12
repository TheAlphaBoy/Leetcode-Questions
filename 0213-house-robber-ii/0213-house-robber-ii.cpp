class Solution {
public:

     // Ref : https://leetcode.com/problems/house-robber-ii/solutions/5362556/tabulation-approach-c-o-n-complexity

    int rob(vector<int>& nums) {
        int n = nums.size();
        if (n == 1) return nums[0];

        vector<int> dp2(n);
        dp2[n-1] = nums[n-1];
        dp2[n-2] = max(nums[n-1],nums[n-2]);

        for(int i= n - 3 ;i>=0;i--){
            if(i==0){
                dp2[0] = max( dp2[1] , dp2[2]) ;
            }
            else{
                dp2[i] = max(dp2[i+1], dp2[i+2] + nums[i]);
            }
        }
        vector<int> dp(n);
        dp[0] = nums[0];
        dp[1] = max(nums[0], nums[1]);
        
        for (int i = 2; i < n; i++) {
            if(i==n-1 ){
                dp[i] = max(dp[i-1] , dp[n-2]) ;
            }
            else
                dp[i] = max(dp[i-1], dp[i-2] + nums[i]);
        }
       return  max(dp2[0],dp[n-1]);
    }
};