class Solution {
public:
    int maxProfit(vector<int>& prices) {

        // Brute Force (TLE) -> Two pointers approach
        // int ans = 0;
        // for(int i=0;i<prices.size()-1;++i) {
        //     for(int j=i+1;j<prices.size();++j) {
        //         ans = max(prices[j]-prices[i],ans);
        //     }
        // }
        // return ans;

        // Optimized sol -> without DP

        int maxPro = 0;
        int minPrice = INT_MAX;
        for(int i = 0; i < prices.size(); i++){
            minPrice = min(minPrice, prices[i]);
            maxPro = max(maxPro, prices[i] - minPrice);
        }
        return maxPro;

    }
};