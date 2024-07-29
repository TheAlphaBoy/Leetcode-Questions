class Solution {
public:
    int majorityElement(vector<int>& nums) {

        unordered_map<int,int>mp;
        int max_freq = INT_MIN;
        int max_freq_elem = -1;
        for(auto it:nums){
            mp[it]++;
            if(max_freq < mp[it]){
                max_freq = mp[it];
                max_freq_elem = it;
            }
        }
        return max_freq_elem;
    }
};