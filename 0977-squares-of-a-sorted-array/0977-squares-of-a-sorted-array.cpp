class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {

        // sol 1 : T.C = O(nlog(n))

        // for(int i=0;i<nums.size();i++){
        //     nums[i]=pow(nums[i],2);
        // }
        // sort(nums.begin(),nums.end());
        // return nums;

        // sol 2 : T.C. = O(nlog(n))

        for(int &it : nums){
            it *= it;
        }
        sort(nums.begin(),nums.end());
        return nums;

    }
};