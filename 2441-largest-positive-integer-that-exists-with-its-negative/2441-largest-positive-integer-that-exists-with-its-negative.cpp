class Solution {
public:
    int findMaxK(vector<int>& nums) {

        // unordered_map<int,int>mp;
        // for(auto it : nums){
        //     mp[abs(it)]++;
        // }
        // int maxi = -1;
        // for(auto it : mp){
        //     if(it.second >1){
        //         maxi = max(maxi,it.first);
        //     }
        // }
        // return maxi;

        sort(nums.begin(), nums.end());
        int low=0, high=nums.size()-1;
        
        while(low < high)
        {
            if((nums[low] + nums[high]) == 0)
            {
                return  nums[high];
            }
            
            else if((nums[low] + nums[high]) < 0)
                low++;
            
            else high--;
        }
        return -1;
    }
};