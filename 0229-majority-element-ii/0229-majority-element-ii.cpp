class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {

        unordered_map<int,int>mp;
        int n=nums.size();
        set<int>ans;
        for(auto it:nums){
            mp[it]++;
            if(mp[it]>n/3){
                ans.insert(it);
            }
        }
        vector<int>res;
        for(auto it:ans){
            res.push_back(it);
        }
        return res;
    }
};