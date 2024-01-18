class Solution {
    // sol 1 : 
//     private:
//     vector<vector<int>>ans;
//     void solve(vector<int>nums,vector<int>op){
//         // BC
//         if(nums.size()==0){
//             ans.push_back(op);
//             return;
//         }
//         vector<int> op1=op;
//         vector<int> op2=op;
//         op2.push_back(nums[0]);
//         nums.erase(nums.begin()+0);
//         solve(nums,op1);
//         solve(nums,op2);
//         return;

//     }
// public:
//     vector<vector<int>> subsets(vector<int>& nums) {

//         vector<int>op;
//         solve(nums,op);
//         return ans;
        
//     }

// sol 2: Little bit optimised
private:

void solve(vector<int>nums,vector<int>op,int i,set<vector<int>>&st){
    // BC
    if(i==nums.size()){
        st.insert(op);
        return;
    }
    solve(nums,op,i+1,st);
    op.push_back(nums[i]);
    solve(nums,op,i+1,st);
        
}

    public:
    vector<vector<int>> subsets(vector<int>& nums) {

        vector<int>op;
        sort(nums.begin(),nums.end());
        set<vector<int>>st;
        solve(nums,op,0,st);
        vector<vector<int>>ans;
        for(auto i:st){
            ans.push_back(i);
        }
        return ans;

    }

};