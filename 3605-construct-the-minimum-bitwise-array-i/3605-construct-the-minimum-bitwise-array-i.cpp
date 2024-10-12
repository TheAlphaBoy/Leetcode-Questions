class Solution {
public:
    vector<int> minBitwiseArray(vector<int>& nums) {
        vector<int>ans(nums.size(),-1);

        for(int i=0;i<nums.size();i++){
            int num=nums[i];
            for(int j=1;j<num;j++){
                int check=j|(j+1);
                if(check==num){ans[i]=j;break;}
            }
        }
        return ans;
    }
};