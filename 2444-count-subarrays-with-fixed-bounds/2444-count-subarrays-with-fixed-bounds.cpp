class Solution {
public:
    long long countSubarrays(vector<int>& nums, int mink, int maxk) {

        long long ans=0;
        int min_pos = -1;
        int max_pos = -1;
        int culprit_idx = -1;

        for(int i=0;i<nums.size();++i){
            if(nums[i] < mink || nums[i] > maxk){
                culprit_idx = i;
            }
            if(nums[i] == mink){
                min_pos = i;
            }
            if(nums[i] == maxk){
                max_pos = i;
            }
            long long smaller = min(min_pos,max_pos);
            long long temp = smaller - culprit_idx;
            ans += (temp<=0)? 0 : temp;
        }
        return ans;
    }
};