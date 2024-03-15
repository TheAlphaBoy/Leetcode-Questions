class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {

        // Brute force Approach , TC => O(N*N)

        // int ans = 0;
        // int cnt = 0 ;
        // int n = nums.size();
        // for(int i = 0 ; i < n ; i ++){
        //     ans = nums[i];
        //     if(ans == goal)
        //         cnt++;
        //     for(int j = i + 1 ; j < n ; j++){
        //         ans += nums[j];
        //         if(ans == goal)
        //             cnt++;
        //         if(ans > goal)
        //             break;
        //     }
        // }
        // return cnt;

        // sol 2 : Using Cummulative sum + hashmap approach

        // Ref : https://youtu.be/5Quv9nnZs34?si=wGkCgr9nW3rLaA9M

        // TC => O(N) bcz traverse only once , SC => O(N) bcz taken extra space as map

        int curr_sum=0;
        unordered_map<int,int>mp;
        mp[0]=1; // i have seen current sum once
        int ans=0;
        for(int i=0;i<nums.size();++i){
            curr_sum += nums[i];
            int rem_sum = curr_sum - goal;
            if(mp.find(rem_sum) != mp.end()){
                ans += mp[rem_sum];
            }
            mp[curr_sum]++;
        }
        return ans;

        // Sol 3 : Using Sliding Windows Approach

        // TC => O(2*N) ~ O(N) && SC => O(1) , as no extra space taken

        // Ref : https://youtu.be/5Quv9nnZs34?si=wGkCgr9nW3rLaA9M

        int i=0;int j=0;
        int n=nums.size();
        int cnt_zeros = 0;
        int result = 0;
        int wind_sum = 0;
        while(j<n){
            wind_sum += nums[j];
            while(i<j && (nums[i]==0 || wind_sum>goal)){
                if(nums[i]==0){
                    cnt_zeros++;
                }
                else{
                    cnt_zeros=0;
                }
                wind_sum -= nums[i];
                ++i;
            }
            if(wind_sum == goal){
                result += 1+cnt_zeros;
            }
        }
        return result;
    }
};