class Solution {
public:

// sol 1 : Two Pointers Approach (More optimized than Dp Approach)

    // bool isSubsequence(string s, string t) {

    //     int i=0;int j=0;
    //     while(i<s.length() && j<t.length()){
    //         if(s[i]==t[j]){
    //             i++;
    //         }
    //         j++;
    //     }
    //     // At the end of traversal, if i is equal to the length of s, 
    //     // then s is a subsequence of t.
    //     return i==s.length();
    // }

// Sol 2 : Dp approach (This Approach is more useful in wildcard Pttern matching question)

    bool isSubsequence(string s, string t) {

        int m=s.length();
        int n=t.length();
        int ans = lcs(s,t,m,n);
        if(s.length()==ans) return true;
        else
        return false;
        
    }
    int lcs(string s,string t,int m,int n){
        vector<vector<int>>dp(m+1,vector<int>(n+1,0));

        for(int i=1;i<m+1;i++){
            for(int j=1;j<n+1;j++){
                if(s[i-1]==t[j-1]){
                    dp[i][j]=1+dp[i-1][j-1];
                }
                else{
                    dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
                }
            }
        }
        return dp[m][n];
    }
};