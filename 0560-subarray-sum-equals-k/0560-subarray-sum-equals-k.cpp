class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {

        // Sol 1 : Using Variable sized Sliding Windows // we can't solve this question by
        // S.W. Bcz of presence of -ve number, S.W. approach will become unstable bcz of -ve elements
        // int n=nums.size();
        // int i=0;int j=0;
        // int curr_sum=0;
        // int maxi=INT_MIN;
        // while(j<n && i<=j){
        //     curr_sum+=nums[j];
        //     if(curr_sum<k){
        //         ++j;
        //     }
        //     else if(curr_sum==k){
        //         maxi=max(maxi,j-i+1);
        //         ++j;
        //     }
        //     else if(curr_sum>k){
        //         while(curr_sum>k){
        //             curr_sum-=nums[i];
        //             ++i;
        //         }
        //         if(curr_sum==k){
        //             maxi=max(maxi,j-i+1);
        //         }
        //         ++j;
        //     }
        // }
        // return maxi;

        // sol 2 : Using Cummulative sum + hashmap approach (Can handle -ve and +ve numbers both)

        // Ref : https://youtu.be/5Quv9nnZs34?si=wGkCgr9nW3rLaA9M

        // TC => O(N) bcz traverse only once , SC => O(N) bcz taken extra space as map

        // int curr_sum=0;
        // unordered_map<int,int>mp;
        // mp[0]=1; // i have seen current sum once
        // int ans=0;
        // for(int i=0;i<nums.size();++i){
        //     curr_sum += nums[i];
        //     int rem_sum = curr_sum - k;
        //     if(mp.find(rem_sum) != mp.end()){
        //         ans += mp[rem_sum];
        //     }
        //     mp[curr_sum]++;
        // }
        // return ans;

        // Revision :

        int n=nums.size();
        unordered_map<int,int>mp;
        mp[0]=1;
        int curr_sum=0;
        int ans=0;
        for(int i=0;i<n;++i){
            curr_sum += nums[i];
            int rem_sum=curr_sum-k;
            if(mp.find(rem_sum)!=mp.end()){
                ans+=mp[rem_sum];
            }
            mp[curr_sum]++;
        }
        return ans;
    }
};
















