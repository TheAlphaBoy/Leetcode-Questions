class Solution {
public:

int solve(int n,int k,int sword,vector<int>&ans) {

    // BC
    if(ans.size()==1){
        return ans[0];
    }
    // Calculate the index to eliminate
    int indexToRemove = (sword + k - 1) % ans.size();

    // Erase the element at the calculated index
    ans.erase(ans.begin() + indexToRemove);

    // Update the sword position
    sword = indexToRemove % ans.size();

    // Recursive call
    return solve(n, k, sword, ans);

}

    int findTheWinner(int n, int k) {

        vector<int>ans;
        for(int i=0;i<n;i++){
            ans.push_back(i+1);
        }
        // Sword is used to represent killing index
        int sword=0;
        return solve(n,k,sword,ans);
        
    }
};