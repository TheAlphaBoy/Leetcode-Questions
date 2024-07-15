class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        // Edge case
        if(n==0)
        return 0;
        int min_price=prices[0];
        int max_profit=0;
        for(int i=1;i<n;++i){
            max_profit=max(max_profit,prices[i]-min_price);
            min_price=min(min_price,prices[i]);
        }
        return max_profit;
    }
};