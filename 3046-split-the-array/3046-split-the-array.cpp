class Solution {
public:
    bool isPossibleToSplit(vector<int>& nums) {
        
        int cnt=0;
        unordered_map<int,int>mp;
        
        for(int it : nums){
            mp[it]++;
        }
        for(const auto& it : mp){
            if(it.second <=2){
                if(it.second==1){
                cnt++;
                }
            }
            else{
                return false;
            }
        }
        return (cnt%2==0);
    }
};