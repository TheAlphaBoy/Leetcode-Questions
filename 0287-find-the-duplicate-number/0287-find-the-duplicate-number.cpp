class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_map<int,int>mp;
        int ans;
        for(int i:nums){
            mp[i]++;
            if(mp[i]>1){
                ans=i;
            }
        }
        return ans;
    }
};