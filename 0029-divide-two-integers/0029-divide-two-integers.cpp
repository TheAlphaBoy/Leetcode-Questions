class Solution {

    // Ref : https://leetcode.com/problems/divide-two-integers/solutions/2089533/easy-solution-in-c

public:
    int divide(int dividend, int divisor) {

        // Controlling edge cases
        if(dividend==INT_MIN && divisor==-1)
        return INT_MAX;
        if(dividend==INT_MIN && divisor==1)
        return INT_MIN;

        long int divd=abs(dividend);
        long int divs=abs(divisor);
        int ans=0;
        while(divs<=divd){
            long int multi=divs,cnt=1;
            while(multi<=divd-multi){
                multi <<= 1;
                cnt <<= 1;
            }
            ans += cnt;
            divd -= multi;
        }
        
        // if(dividend>0 && divisor<0 || dividend<0&& divisor>0)
        // return -cnt;
        // return cnt;

        // Alternate way of above comment

        if(dividend<0 ^ divisor<0)
        return -ans;
        else
        return ans;        
    }
};