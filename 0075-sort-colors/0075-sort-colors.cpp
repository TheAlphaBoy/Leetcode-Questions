class Solution {
public:
    void sortColors(vector<int>& nums) {

        // Sol 1 : counting method
        // int zeroes,ones,twoes;
        // zeroes=ones=twoes=0;
        // //step 1 : counting 
        // for(int i=0;i<nums.size();i++) {
        //     if(nums[i]==0) {
        //         zeroes++;
        //     }
        //     if(nums[i]==1) {
        //         ones++;
        //     }
        //     if(nums[i]==2) {
        //         twoes++;
        //     }
        // }
        // // step 2 : spread those numbers respectively
        // int i =0;
        // while (zeroes--) {
        //     nums[i]=0;
        //     i++;
        // }
        // while(ones--) {
        //     nums[i] = 1;
        //     i++;
        // }
        // while(twoes--) {
        //     nums[i]=2;
        //     i++;
        // }
        // Sol 2 : In-place 3 Pointers approach
        // int l =0 ;
        // int m =0;
        // int h = nums.size()-1;
        // while (m<=h) {
        //     if(nums[m] == 0) {
        //         swap(nums[l],nums[m]);
        //         l++;m++;
        //     }
        //     else if(nums[m] == 1) {
        //         m++;
        //     }
        //     else {
        //         swap(nums[m],nums[h]);
        //         h--;
        //     }
        // }

        // Revision

        int l=0,m=0;int h=nums.size()-1;
        while(m<=h) {
            if(nums[m]==0){
                swap(nums[l],nums[m]);
                ++l;++m;
            }
            else if(nums[m]==1) {
                ++m;
            }
            else{
                swap(nums[m],nums[h]);
                --h;
            }
        }

    }
};
































