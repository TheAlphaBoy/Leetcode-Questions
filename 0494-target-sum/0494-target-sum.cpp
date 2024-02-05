class Solution {

// Ref : Same as GFG Q -> Partitions with Given Difference (Bas usme diff h yaha target h, replace kardo)
public:

int countsubsetwithsums1(int n,vector<int>&nums,int s1){

    int mod=1e9+7;
    vector<vector<int>>t(n+1,vector<int>(s1+1));
    // Initiallising the dp as per the given conditions
    for(int i=0;i<n+1;i++){
        for(int j=0;j<s1+1;j++){
            if(i==0){
                t[i][j]=0;
            }
            if(j==0){
                t[i][j]=1;
            }
        }
    }
    for(int i=1;i<n+1;i++){
        for(int j=0;j<s1+1;j++){
            if(nums[i-1]<=j){
                t[i][j]=(t[i-1][j-nums[i-1]] + t[i-1][j])%mod;
            }
            else{
                t[i][j]=t[i-1][j] % mod;
            }
        }
    }
    return t[n][s1]%mod;

}

    int findTargetSumWays(vector<int>& nums, int target) {

        int n=nums.size();
        int mod=1e9+7;
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=nums[i]%mod;
        }
        int s1=(target+sum)/2;
        // if sum is odd and sum is negative then return 0
        // here i take abs(target) bcz to check ki agar target negative h tab usko +ve 
        // bnake sum-target kya less than 0 aa rhe h then we simply return 0
        if(sum-abs(target) < 0 || ((target+sum) % 2)) return 0;

        return countsubsetwithsums1(n,nums,s1);
        
    }
};