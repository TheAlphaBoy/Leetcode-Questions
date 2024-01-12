// 503. Next Greater Element II
/*
class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {

        int n = nums.size();
        vector<int> v(n, -1);
        
        for (int i = 0; i < n; ++i) {
            int j = (i + 1) % n; // Use modulo to handle circular nature
            
            while (j != i && nums[j] <= nums[i]) {
                j = (j + 1) % n;
            }

            if (j != i) {
                v[i] = nums[j];
            }
        }

        return v;
    }
};
*/