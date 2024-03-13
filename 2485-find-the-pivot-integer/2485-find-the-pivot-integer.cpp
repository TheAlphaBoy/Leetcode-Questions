class Solution {
public:
    int pivotInteger(int n) {

        // int sum=0;
        // int bsum=0;
        // for(int i=1;i<=n;++i){
        //     if(n==1){
        //         return 1;
        //     }
        //     sum += i;
        //     if(sum==bsum){
        //         return i+1;
        //     }
        //     else if(sum>bsum){
        //         bsum += n;
        //         --n;
        //     }
        // }
        // return -1;

        // Ref : https://leetcode.com/problems/find-the-pivot-integer/solutions/4867096/beat-100-pivot-integer-finder

        int ls=(n*(n+1))/2,rs=0;

        while(ls>rs){
        rs+=n;
        if(rs==ls)return n;
        ls-=n;
        n--;
        }
        return -1;
    }
};