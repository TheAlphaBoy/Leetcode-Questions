class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        
        unordered_map<int,int>mp;
        int count=0;
        int ans =INT_MIN;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
            ans=max(ans,mp[nums[i]]);
        }
        for(auto s:mp){
            if(s.second==ans){
                count++;
            }
        }
        return (count*ans);

        // Revision : 

        // unordered_map<int,int>mp;
        // for(auto it : nums){
        //     mp[it]++;
        // }
        // int maxi = INT_MIN;
        // for(auto it : mp){
        //     maxi = max(maxi,it.second);
        // }
        // int cnt=0;
        // for(auto it : mp){
        //     if(maxi == it.second){
        //         ++cnt;
        //     }
        // }
        // return maxi*cnt;
    }
};































