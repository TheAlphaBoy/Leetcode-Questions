class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {

        unordered_map<int , int> mp;
        for(auto& i : nums)
            mp[i]++;
        int n = nums.size();
        int temp ;
        for(auto& i : mp){
            if(i.second == 2){
                temp = i.first;
                break;
            }
        }
        for(int i = 1; i <= n ; i++){
            if(mp.find(i) == mp.end())
                return {temp , i};
        }
        return {-1 , -1};
        
    }
};