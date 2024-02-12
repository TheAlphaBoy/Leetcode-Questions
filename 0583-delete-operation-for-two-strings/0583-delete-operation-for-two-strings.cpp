class Solution {

// Ref : https://leetcode.com/problems/delete-operation-for-two-strings/solutions/3097448/beats-100-simple-and-easy-to-understand-tabulation-c

public:
    int minDistance(string word1, string word2) {

        int m=word1.length();
        int n=word2.length();
        // Using Aditya verma's Concept
        return m+n-(2*lcs(word1,word2,m,n));        
    }
    int lcs(string word1,string word2,int m,int n){
        // Initialising 2D vector with zero
        vector<vector<int>>t(m+1,vector<int>(n+1,0));
        
        for(int i=1;i<m+1;i++){
            for(int j=1;j<n+1;j++){
                if(word1[i-1]==word2[j-1]){
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