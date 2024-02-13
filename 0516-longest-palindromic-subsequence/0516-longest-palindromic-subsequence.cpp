class Solution {
public:
    int longestPalindromeSubseq(string s) {
        
        // Reverse string s

        string p (s.rbegin(),s.rend());
        int m=s.length();
        int n=p.length();
        return lcs(s,p,m,n);        
    }
    int lcs(string s,string p,int m,int n){
        vector<vector<int>>t(m+1,vector<int>(n+1,0));

        for(int i=1;i<m+1;i++){
            for(int j=1;j<n+1;j++){
                if(s[i-1]==p[j-1]){
                    t[i][j]=1+t[i-1][j-1];
                }
                else{
                    t[i][j]=max(t[i-1][j],t[i][j-1]);
                }
            }
        }
        return t[m][n];
    }
};