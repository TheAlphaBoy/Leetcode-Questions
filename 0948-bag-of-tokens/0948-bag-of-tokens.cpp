class Solution {
public:

// Ref : https://leetcode.com/problems/bag-of-tokens/solutions/4820126/thinking-process-recursion-memoization-dp-greedy-all-approaches-d

    int bagOfTokensScore(vector<int>& tokens, int power) {

        sort(tokens.begin(),tokens.end());
        int n=tokens.size();
        int i=0;
        int j=n-1;
        int score=0;
        int ans=0;
        while(i<=j){
            if(power>=tokens[i]){
                power -= tokens[i];
                ++score;
                ans = max(ans,score);
                ++i;
            }
            else if(score>=1){
                power += tokens[j];
                --score;
                --j;
            }
            else{
                ++i;
            }
        }
        return ans;
    }
};