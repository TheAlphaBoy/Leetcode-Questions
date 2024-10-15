class Solution {
public:
    vector<int> minBitwiseArray(vector<int>& nums) {
         int n = nums.size();

        vector<int> ans(n, -1);

        for(int i = 0; i < n; i++){
            int num = nums[i];
            if(num == 2) continue;

            ans[i] = solve(num);
        }

        return ans;
    }
      int solve(int num){
        int best = num;

        for(int i = 0; i < 31; i++){
            int p = 1 << i;
            if (((num - p) | ((num - p) + 1)) == num) {
                best = min(best, num - p);
            }
        }

        return best;
    }
};