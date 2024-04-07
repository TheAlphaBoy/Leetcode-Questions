class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        
        int n = nums.size();
        if (n <= 1) return n;

        vector<int> inc(n, 1); // Length of longest increasing subarray ending at i
        vector<int> dec(n, 1); // Length of longest decreasing subarray ending at i

        for (int i = 1; i < n; ++i) {
            if (nums[i] > nums[i - 1])
                inc[i] = inc[i - 1] + 1;
            if (nums[i] < nums[i - 1])
                dec[i] = dec[i - 1] + 1;
        }

        int max_len = 1;
        for (int i = 0; i < n; ++i) {
            max_len = max(max_len, max(inc[i], dec[i]));
        }

        return max_len;
        
    }
};