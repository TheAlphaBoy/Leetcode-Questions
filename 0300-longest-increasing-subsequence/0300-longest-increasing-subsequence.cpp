class Solution {
public:

// Using LIS(Longest increasing subsequence) pattern
// TC=> O(N*N)
// SC=> O(N)

    int lengthOfLIS(vector<int>& nums) {

        int n = nums.size();
        vector<int>dp(n,1);
        int ans = 1;
        for(int i=0;i<n;++i){
            for(int j=i-1;j>=0;--j){
                if(nums[j]<nums[i]){
                    dp[i] = max(dp[j]+1,dp[i]);
                }
            }
            ans = max(ans,dp[i]);
        }
        return ans;
    }
};