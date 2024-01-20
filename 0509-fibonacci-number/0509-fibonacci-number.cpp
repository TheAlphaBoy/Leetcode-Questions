class Solution {
public:
    int fib(int n) {

        // BC
        if(n==0 || n==1){
            return n;
        }
        int solve1=fib(n-1);
        int solve2=fib(n-2);
        return solve1+solve2;
        
    }
};