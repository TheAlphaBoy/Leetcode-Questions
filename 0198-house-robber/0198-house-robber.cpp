class Solution {
public:

// Sol 1 : Recursive Approcah (TLE)
    // int rob(vector<int>&nums, int i) {
    // if (i < 0) {
    //     return 0;
    // }
    // return max(rob(nums, i - 2) + nums[i], rob(nums, i - 1));
    // }

    // int rob(vector<int>& nums) {
    //     return rob(nums,nums.size()-1);
    // }

    // Sol 2 : Tabulation Method (Buttom-Up DP)

    int rob(vector<int>& nums) {

        if (nums.size() == 0) return 0;
        vector<int>dp(nums.size()+1);
        dp[0] = 0;
        dp[1] = nums[0];
        for (int i = 1; i < nums.size(); i++) {
            int val = nums[i];
            dp[i+1] = max(dp[i],dp[i-1] + val);
        }
        return dp[nums.size()];
    }

};