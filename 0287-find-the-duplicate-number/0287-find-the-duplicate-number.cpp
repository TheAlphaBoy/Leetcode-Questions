class Solution {
public:
    int findDuplicate(vector<int>& nums) {

        unordered_map<int,int>mp;
        int ans;
        for(int it : nums){
            mp[it]++;
            if(mp[it]>1){
                ans = it;
            }
        }
        return ans;
    }
};