class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {

        // Sol 1 : Brute force (TLE Occurs)
        // vector<int>ans;
        // while(nums.size()>0){
        //     for(int i=0;i<nums.size();i++){
        //         if(ans.size()%2==0){ // even index hai
        //             if(nums[i]>0){
        //                 ans.push_back(nums[i]);
        //                 nums.erase(nums.begin()+i);
        //                 i=0;
        //                 break;
        //             }
        //         }
        //         else { // odd index hai

        //             if(nums[i]<0){
        //                 ans.push_back(nums[i]);
        //                 nums.erase(nums.begin()+i);
        //                 i=0;
        //                 break;
        //             }
        //         }
        //     }
        // }
        // return ans;

        // Sol 2 : Optimized solution 

        // Ref : https://leetcode.com/problems/rearrange-array-elements-by-sign/solutions/1711407/c-simple-two-pointers-solution

        vector<int>ans(nums.size(),0);
        int p_index=0;
        int n_index=1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>0){
                ans[p_index]=nums[i];
                p_index += 2;
            }
            else{
                ans[n_index]=nums[i];
                n_index +=2;
            }
        }
        return ans;
    }
};