class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {

        // TC => O(2*N) ~ O(N) , SC => O(2N) , as 2 extra array me store kar rhe hai memory,
        // third wala to result ke liye hota hai to usko nhi lete hai

        // int n = nums.size();
        // std::vector<int> answer(n, 1);

        // // Calculate the product of all elements to the left of i
        // int leftProduct = 1;
        // for (int i = 0; i < n; ++i) {
        //     answer[i] *= leftProduct;
        //     leftProduct *= nums[i];
        // }

        // // Calculate the product of all elements to the right of i
        // int rightProduct = 1;
        // for (int i = n - 1; i >= 0; --i) {
        //     answer[i] *= rightProduct;
        //     rightProduct *= nums[i];
        // }

        // return answer;

        // Revision code by self : 

        int n=nums.size();
        int prefix_prod[n];
        int suffix_prod[n];
        prefix_prod[0]=1;
        suffix_prod[n-1]=1;
        for(int i=1;i<n;++i){
            prefix_prod[i] = prefix_prod[i-1]*nums[i-1];
        }
        for(int i=n-2;i>=0;--i){
            suffix_prod[i] = suffix_prod[i+1] * nums[i+1];
        }
        vector<int>result(n);
        for(int i=0;i<n;++i){
            result[i] = prefix_prod[i] * suffix_prod[i];
        }
        return result;
    }
};