class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {

        // sol : Using Cummulative sum + hashmap approach

        // Ref : https://youtu.be/5Quv9nnZs34?si=wGkCgr9nW3rLaA9M

        // TC => O(N) bcz traverse only once , SC => O(N) bcz taken extra space as map


        int curr_sum=0;
        unordered_map<int,int>mp;
        mp[0]=1; // i have seen current sum once
        int ans=0;
        for(int i=0;i<nums.size();++i){
            curr_sum += nums[i];
            int rem_sum = curr_sum - k;
            if(mp.find(rem_sum) != mp.end()){
                ans += mp[rem_sum];
            }
            mp[curr_sum]++;
        }
        return ans;
        
    }
};