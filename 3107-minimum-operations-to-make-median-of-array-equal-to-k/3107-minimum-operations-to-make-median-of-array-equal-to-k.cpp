class Solution {
public:
    long long minOperationsToMakeMedianK(vector<int>& nums, int k) {
        
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int mid = n/2;
        if(nums[mid]==k)
            return 0;
        else if(nums[mid]>k){
            long long cnt=0;
            for(int i=mid;i>=0;--i){
                if(nums[i]>=k){
                    cnt += nums[i]-k;
                }
                else{
                    break;
                }
            }
            return cnt;
        }
        else{
            long long cnt=0;
            for(int i=mid;i<n;++i){
                if(nums[i]<=k){
                    cnt += k-nums[i];
                }
            }
            return cnt;
        }
        
    }
};