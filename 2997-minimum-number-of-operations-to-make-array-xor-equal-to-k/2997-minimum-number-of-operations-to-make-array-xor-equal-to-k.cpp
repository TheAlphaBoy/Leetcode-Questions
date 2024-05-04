class Solution {
public:
int countSetBits(int n){
        int count = 0;
        while (n > 0) {
            count++;
            n &= (n - 1);
        }
        return count;
}  
    int minOperations(vector<int>& nums, int k) {
        int n=nums.size();
        int xoro=nums[0];
        for(int i=1;i<n;i++){
            xoro ^= nums[i];
            // cout<<xoro<<endl;
        }
        //return __builtin_popcount(xoro^k);
        return countSetBits(xoro^k);
    }
};