class Solution {
public:
int t[2001][2001];
    int minCut(string s) {

        memset(t,-1,sizeof(t));
        int i=0;
        int n=s.length();
        int j=n-1;
        return mcm(s,i,j);        
    }
    int mcm(string &s,int i,int j){
        if(i>=j){
            return 0;
        }
        if(ispalindrome(s,i,j)){
            return 0;
        }
        if(t[i][j]!=-1){
            return t[i][j];
        }
        int mini=INT_MAX;
        for(int k=i;k<j;k++){
            if(ispalindrome(s,i,k)){
                int temp_ans=1+mcm(s,i,k)+mcm(s,k+1,j);
                mini=min(mini,temp_ans);
            }
        }
        return t[i][j]=mini;
    }
    bool ispalindrome(string &s,int i,int j){
        if(i==j){
            return true;
        }
        while(i<j){
            if(s[i]!=s[j]){
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
};