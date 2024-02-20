class Solution {
public:
    int missingNumber(vector<int>& nums) {

        // sol 1 : Sorting method ( tc -> O(nlogn) )

        // sort(nums.begin(),nums.end());
        // int i=0;
        // while(i<nums.size()){
        //     if(nums[i]!=i){
        //         break;
        //     }
        //     i++;
        // }
        // return i;

        // sol 2 : Optimized way ( T.C.-> O(n) & S.C. -> O(1) )

        int n=nums.size();
        int expected_sum=(n*(n+1))/2;
        int actual_sum=0;
        for(int it : nums){
            actual_sum += it;
        }
        return expected_sum-actual_sum;
    }
};