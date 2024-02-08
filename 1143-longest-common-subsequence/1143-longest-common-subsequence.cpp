class Solution {
public:
int solve(string &text1,string &text2,int m,int n,int t[][1001]){
    // BC
    if(m==0 || n==0){
        return 0;
    }
    if(t[m][n] != -1){
        return t[m][n];
    }
    if(text1[m-1]==text2[n-1]){
        return t[m][n]=1+solve(text1,text2,m-1,n-1,t);
    }
    else{
        return t[m][n]= max(solve(text1,text2,m-1,n,t),solve(text1,text2,m,n-1,t));
    }
}
    int longestCommonSubsequence(string text1, string text2) {

        int m=text1.size();
        int n=text2.size();
        int t[1001][1001];
        memset(t,-1,sizeof(t));
        return solve(text1,text2,m,n,t);
        
    }
};