class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {

        // Brute Force Approach : 

        vector<int>ans;
        int i=0,j=0;
        while(i<m && j<n){
            if(nums1[i]<=nums2[j]){
                ans.push_back(nums1[i]);
                ++i;
            }
            else{
                ans.push_back(nums2[j]);
                ++j;
            }
        }
        while(i<m){
            ans.push_back(nums1[i]);
            ++i;
        }
        while(j<n){
            ans.push_back(nums2[j]);
            ++j;
        }
        for(int a=0;a<m+n;++a){
            nums1[a]=ans[a];
        }
    }
};