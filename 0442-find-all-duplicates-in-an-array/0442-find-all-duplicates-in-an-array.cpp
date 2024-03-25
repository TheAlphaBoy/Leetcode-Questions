class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {

        unordered_map<int,int>mp;
        vector<int>ans;
        for(int it : nums){
            mp[it]++;
            if(mp[it]==2){
                ans.push_back(it);
            }
        }
        return ans;
    }
};