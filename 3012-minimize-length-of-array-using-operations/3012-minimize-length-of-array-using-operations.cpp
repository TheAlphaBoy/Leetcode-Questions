class Solution {
public:
    int minimumArrayLength(vector<int>& nums) {

        sort(nums.begin(),nums.end());
        int cnt=1;
        int gcd=INT_MAX;
        for(int i=1;i<nums.size();i++) {
            gcd=min(gcd,__gcd(nums[i],nums[i-1]));
            if(gcd<nums[0]){
                return 1;
            }
            if(nums[i]==nums[0]){
                cnt++;
            }
        }
        int ans=ceil(cnt/(2*1.0));
        return ans;
    }
};