class Solution {
public:

// Sol 1 : Memoization (top-down Approach) 

// int solve(string &text1,string &text2,int m,int n,int t[][1001]){
//     // BC
//     if(m==0 || n==0){
//         return 0;
//     }
//     if(t[m][n] != -1){
//         return t[m][n];
//     }
//     if(text1[m-1]==text2[n-1]){
//         return t[m][n]=1+solve(text1,text2,m-1,n-1,t);
//     }
//     else{
//         return t[m][n]= max(solve(text1,text2,m-1,n,t),solve(text1,text2,m,n-1,t));
//     }
// }
//     int longestCommonSubsequence(string text1, string text2) {

//         int m=text1.size();
//         int n=text2.size();
//         int t[1001][1001];
//         memset(t,-1,sizeof(t));
//         return solve(text1,text2,m,n,t);
        
//     }

// Sol 2 : Tabulation Approach (Bottom-Up Approach)

    int longestCommonSubsequence(string text1, string text2) {

        int m=text1.size();
        int n=text2.size();
        // Creating a 2d matrix for dp
        vector<vector<int>>t(m+1,vector<int>(n+1));
        // Initialising the 1st row and 1st column of dp as per question
        for(int i=0;i<m+1;i++){
            for(int j=0;j<n+1;j++){
                t[0][j]=0;
                t[i][0]=0;
            }
        }
        for(int i=1;i<m+1;i++){
            for(int j=1;j<n+1;j++){
                if(text1[i-1]==text2[j-1]){
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