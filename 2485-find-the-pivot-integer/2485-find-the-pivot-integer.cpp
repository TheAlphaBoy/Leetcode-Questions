class Solution {
public:
    int pivotInteger(int n) {

        // Same TC and SC for both solution , TC => O(N) , and SC => O1)

        // Sol 1 :

        // Ref : https://leetcode.com/problems/find-the-pivot-integer/solutions/4867096/beat-100-pivot-integer-finder

        // int ls=(n*(n+1))/2,rs=0;

        // while(ls>rs){
        // rs+=n;
        // if(rs==ls)return n;
        // ls-=n;
        // n--;
        // }
        // return -1;

        // Sol 2 : 

        int total_sum = n*(n+1)/2;
        for(int i=1;i<=n;++i){
            int left_sum = i*(i+1)/2;
            int right_sum = total_sum - left_sum + i;
            if(left_sum == right_sum){
                return i;
            }
        }
        return -1;
    }
};