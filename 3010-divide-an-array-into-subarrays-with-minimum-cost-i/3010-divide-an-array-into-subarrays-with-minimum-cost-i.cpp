class Solution {
public:
    int minimumCost(vector<int>& nums) {
        
        int sum=0;
        int n=nums.size();
        if(n==3){
            for(int i=0;i<n;i++){
                sum += nums[i];
            }
            return sum;
        }
        sum=nums[0];
        nums.erase(nums.begin()+0);
        sort(nums.begin(),nums.end());
        int second=nums[0];
        int third=nums[1];
        sum=sum+second+third;
        return sum;
        
    }
};