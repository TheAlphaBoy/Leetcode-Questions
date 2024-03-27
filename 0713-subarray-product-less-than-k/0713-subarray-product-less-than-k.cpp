class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {

        // Edge case
        if(k<=1){ // tab koi bhi subarray nhi hoga jiska prod k se kam ho kyoki ye 
        // given hai ki array ke elements alsways positive hai
            return 0;
        }

        int n=nums.size();
        int i=0;
        int j=0;
        int cnt=0;
        int prod=1;
        while(j<n){
            prod *= nums[j];
            while(prod>=k){
                prod /= nums[i];
                ++i;
            }
            cnt += j-i+1; // number of subarrays whose prod is less than k at j
            ++j;
        }
        return cnt;
    }
};