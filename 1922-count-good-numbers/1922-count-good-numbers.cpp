#define mod 1000000007
class Solution {
    private:
    long long power(long long x,long long y){
        if(y==0)
        return 1;
        long long ans=power(x,y/2);
        ans *= ans;
        ans %=mod;
        if(y%2==1){
            ans*=x;
            ans %= mod;
        }
        return ans;
    }
public:
    int countGoodNumbers(long long n) {

        long long oddno=n/2;
        long long evenno=n/2 + n%2;

        return (power(5,evenno) * power(4,oddno)) % mod;
        
    }
};