class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {

        // Brute Force Approach : 
        // TC => O(M+N) , SC => O(M+N)
        // vector<int>ans;
        // int i=0,j=0;
        // while(i<m && j<n){
        //     if(nums1[i]<=nums2[j]){
        //         ans.push_back(nums1[i]);
        //         ++i;
        //     }
        //     else{
        //         ans.push_back(nums2[j]);
        //         ++j;
        //     }
        // }
        // while(i<m){
        //     ans.push_back(nums1[i]);
        //     ++i;
        // }
        // while(j<n){
        //     ans.push_back(nums2[j]);
        //     ++j;
        // }
        // for(int a=0;a<m+n;++a){
        //     nums1[a]=ans[a];
        // }

        // Optimised sol : 
        // TC => O(M LOG M) + O(N LOG N) + O(M) + O(N)
        // SC=> O(1)

        int right=m-1;
        int left=0;
        // Ensure nums1 has enough space for nums2 elements
        if (nums1.size() < m + n) {
            nums1.resize(m + n);
        }

        while(left<n && right>=0){
            if(nums1[right] > nums2[left]){
                swap(nums1[right],nums2[left]);
                ++left;--right;
            }
            else{
                break;
            }
        }
        sort(nums1.begin(),nums1.begin()+m);
        sort(nums2.begin(),nums2.end());
        for(int i=0;i<n;++i){
            nums1[m+i]=nums2[i];
        }
    }
};






















