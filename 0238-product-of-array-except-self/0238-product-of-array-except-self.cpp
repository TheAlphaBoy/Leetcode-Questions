class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {

        int n = nums.size();
        std::vector<int> answer(n, 1);

        // Calculate the product of all elements to the left of i
        int leftProduct = 1;
        for (int i = 0; i < n; ++i) {
            answer[i] *= leftProduct;
            leftProduct *= nums[i];
        }

        // Calculate the product of all elements to the right of i
        int rightProduct = 1;
        for (int i = n - 1; i >= 0; --i) {
            answer[i] *= rightProduct;
            rightProduct *= nums[i];
        }

        return answer;
        
    }
};