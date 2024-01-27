class Solution {
public:

bool solve(vector<int>nums,int n,int sum){
    vector<vector<int>>t(n+1,vector<int>(sum+1,false));
    for(int i=0;i<n;i++){
        t[i][0]=true;
    }
    
    for(int i=1;i<n+1;i++){
        for(int j=1;j<sum+1;j++){
            if(nums[i-1]<=j){
                t[i][j]=t[i-1][j-nums[i-1]] || t[i-1][j];
            }
            else{
                t[i][j]=t[i-1][j];
            }
        }
    }
    return t[n][sum];
    
}

    bool canPartition(vector<int>& nums) {

        int sum=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            sum +=nums[i];
        }
        if(sum%2!=0){
            return 0;
        }
        else{
            return solve(nums,n,sum/2);
        }
        
    }
};