class Solution {
public:
    long long countSubarrays(vector<int>& nums, int k) {

        int n = nums.size();
        int i=0;int j=0;
        int cnt_max=0;
        long long ans=0;
        int max_elem = *max_element(nums.begin(),nums.end());
        while(j<n){
            if(nums[j]==max_elem){
                ++cnt_max;
            }
            while(cnt_max >= k){
                ans += n-j;
                if(nums[i]==max_elem){
                    --cnt_max;
                }
                ++i;
            }
            ++j;
        }
        return ans;
    }
};