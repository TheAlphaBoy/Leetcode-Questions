class Solution {
public:
    bool isPowerOfTwo(int n) {

        // sol 1 : using loop and pow function
        // for(int i=0;i<=30;i++) {
        //     int ans = pow(2,i);
        //     if(n==ans){
        //         return true;
        //     }
        // }
        // return false;

        // sol 2 : using observation (Bit manipulation is done mainly by observation)

        // BC
        if(n<=0)
        return false;
        //observe that by taking & operation b/w n-1 and n will always be zero if n is elemnt power of two 

        if((n&(n-1))==0)
        return true;
        else
        return false;

    }
};