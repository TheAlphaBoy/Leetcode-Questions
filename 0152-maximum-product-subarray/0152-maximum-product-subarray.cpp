class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();
        double maxProd=INT_MIN;
        double prod_so_far=1;

        int i, j;
        // left to right
        for(i=0;i<n;++i){
            prod_so_far *= (long long) nums[i];
            if(prod_so_far > maxProd) maxProd = prod_so_far;
            if(prod_so_far == 0){
                prod_so_far = 1;
            }
            
        }

        // right to left
        prod_so_far = 1;
        for(i=n-1;i>=0;i--){
            prod_so_far *= (long long) nums[i];
            if(prod_so_far > maxProd) maxProd = prod_so_far;
            if(prod_so_far == 0){
                prod_so_far = 1;
            }
        }

        return (int)maxProd;
    }
};