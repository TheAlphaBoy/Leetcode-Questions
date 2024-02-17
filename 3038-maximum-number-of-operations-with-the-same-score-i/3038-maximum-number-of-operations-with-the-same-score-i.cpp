class Solution {
public:
    int maxOperations(vector<int>& nums) {
        
        int cnt=0;
        int sum = nums[0] + nums[1];
    
        while (nums.size() >= 2) {
        int a = nums[0];
        nums.erase(nums.begin());
        int b = nums[0];
        nums.erase(nums.begin());
        
        if (a + b == sum) {
            cnt++;
        } else {
            break;
        }
    }
    return cnt;
    }
};