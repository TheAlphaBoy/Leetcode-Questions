class Solution {
public:
    int findMaxLength(vector<int>& nums) {

        // Using Cummulative sum + Hashmap Algorithm Approach
        // TC => O(N),as traverse only one time
        // SC => O(N), as taken extra space for map to store indexes

        unordered_map<int,int>mp;
        int curr_sum=0;
        mp[0]=-1;
        int result = 0;
        for(int i=0;i<nums.size();++i){
            curr_sum += (nums[i]==1)? 1:-1;
            if(mp.find(curr_sum) != mp.end()){
                result = max(result,i-mp[curr_sum]);
            }
            else{
                mp[curr_sum] = i;
            }
        }
        return result;
    }
};