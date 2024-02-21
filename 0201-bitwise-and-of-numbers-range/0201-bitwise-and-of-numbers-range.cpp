class Solution {
public:
    int rangeBitwiseAnd(int left, int right) {

        // sol 1 : Brute force (TLE Ocuurs)

        // long ans=left;
        // long j=left;
        // while(j<=right){
        //     ans=ans&j;
        //     if(ans==0)
        //     break;
        //     ++j;
        // }
        // return ans;

        // sol 2 : Using Bit manipulation
        // Ref : https://leetcode.com/problems/bitwise-and-of-numbers-range/solutions/2549796/c-two-simple-approach-brute-force-and-bit-manipulation

        int cnt=0;
        while(left != right){
            left = left>>1;
            right = right>>1;
            ++cnt;
        }
        return left<<cnt;
    }
};