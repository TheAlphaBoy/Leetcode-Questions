class Solution {
public:
    vector<vector<int>> divideArray(vector<int>& nums, int k) {

        sort(nums.begin(),nums.end());
        // BC
        if(nums.size()%3!=0){
            return{};
        }
        vector<vector<int>>ans;
        for(int i=0;i<nums.size()-2;i+=3){
            if(abs(nums[i]-nums[i+1])<=k && abs(nums[i+1]-nums[i+2])<=k && abs(nums[i]-nums[i+2])<=k){
                ans.push_back({nums[i],nums[i+1],nums[i+2]});
            }
            else{
                return {};
            }
        }
        return ans;
    }
};