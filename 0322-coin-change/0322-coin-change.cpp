class Solution {
public:

// Note -

// 1.
// We need to initialize the 2nd row.
// Reason : Suppose you fill the only 0th row with INT_MAX, and iterating from i=1.
// In the iteration, we will look at values in (i-1)th row, which are all INT_MAX. So
// basically the comparison would be min(INT_MAX+1, INT_MAX).
// Alternate: You can skip the 0th row altogether. I think we can just start directly 
// from i=1 (fill up as mentioned in the video), and then start the iteration from i=2

// 2. 
// t[0][0] should be 0/INT_MAX? Doesn't really matter. You have started the loop from 
// i=2, and you will only look into i=1 (because i-1th row).

    int coinChange(vector<int>& coins, int amount) {

        int n=coins.size();
        // Initialisation of dp as per questions
        vector<vector<int>>t(n+1,vector<int>(amount+1));
        for(int i=0;i<n+1;i++){
            for(int j=0;j<amount+1;j++){
                t[0][j]=INT_MAX-1;
                t[i][0]=0;
            }
        }
        // Initialisation of 2nd row of dp (koi jarurat nhi hai iske bina bhi answer aa skta hai)
        for(int i=1,j=1;j<amount+1;j++){
            if(j%coins[0]==0){
                t[i][j]=j/coins[0];
            }
            else{
                t[i][j]=INT_MAX-1;
            }
        }
        for(int i=2;i<n+1;i++){
            for(int j=1;j<amount+1;j++){
                if(coins[i-1]<=j){
                    t[i][j]=min(1+t[i][j-coins[i-1]],t[i-1][j]);
                }
                else{
                    t[i][j]=t[i-1][j];
                }
            }
        }

        // Note dekh lo upper agar ye samagh nhi ara to
        if(t[n][amount] == INT_MAX - 1){
            return -1;
        }
        else{
            return t[n][amount];
        }
    }
};