class Solution {
public:

// Ref : https://leetcode.com/problems/minimum-common-value/solutions/4845076/beat-97-59-full-explanation-with-pictures

    int getCommon(vector<int>& nums1, vector<int>& nums2) {

        // Sol 1 : Naive Approach

        // for(int i=0;i<nums1.size();++i){
        //     for(int j=0;j<nums2.size();++j){
        //         if(nums1[i]==nums2[j]){
        //             return nums1[i];
        //         }
        //     }
        // }
        // return -1;

        // Sol 2 : TC=> O(max(nums1.size().nums2.size()))

        int i=0;
        int j=0;
        while(i<nums1.size() && j<nums2.size()){
            if(nums1[i]==nums2[j]){
                return nums1[i];
            }
            else if(nums1[i]<nums2[j]){
                ++i;
            }
            else{
                ++j;
            }
        }
        return -1;
    }
};