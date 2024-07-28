class Solution {

    public:

//     double solve(double x,long n){
//         if(n==0) {
//             return 1;
//         }
//         if(n<0) {
//             return solve(1/x,-n);
//         }
//         if(n%2==0){
//             return solve(x*x,n/2);
//         }
//         else{
//             return x*solve(x*x,(n-1)/2);
//         }
//     }

//     double myPow(double x, int n) {

//         // Recursive Approach
//         return solve(x,(long)n);
//     }

     // Optimized sol : Binary exponensiation Approach

    double myPow(double x, int n) {
        int m=abs(n);
        double ans=1.0;
        while(m>=1) {
            if(m%2==1) // (n&1) bhi likh sakte hai
            ans=ans*x;
            m/=2;
            x=x*x;
        }
        return n<0? 1/ans:ans;
    }
};
