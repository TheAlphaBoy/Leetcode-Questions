class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {

        // TLE

        // Time complexity: O(n)
        // Space complexity: O(1)

        // long long i=0;long long j=0;
        // long long n=nums.size();
        // long long sum=0;
        // long long cnt=0;
        // while(j<n){
        //     sum += nums[j];
        //     if(sum<goal){
        //         ++j;
        //     }
        //     else if(sum==goal){
        //         ++cnt;
        //         sum -= nums[i];
        //         ++i;++j;
        //     }
        //     else { // sum > goal
        //     sum -= nums[i];
        //     ++i;
        //     }
        // }
        // return cnt;

        int ans = 0;
        int cnt = 0 ;
        int n = nums.size();
        for(int i = 0 ; i < n ; i ++){
            ans = nums[i];
            if(ans == goal)
                cnt++;
            for(int j = i + 1 ; j < n ; j++){
                ans += nums[j];
                if(ans == goal)
                    cnt++;
                if(ans > goal)
                    break;
            }
        }
        return cnt;

    }
};