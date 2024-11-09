class Solution {
public:
    long long minEnd(int n, int x) {
        long long ans = 0;
        n--;
        long long power = 1;
        while (x > 0 || n > 0)
        {
            if (x % 2 == 1)
            {
                ans += power;
            }
            else
            {
                ans += power * (n % 2);
                n /= 2;
            }
            x /= 2;
            power *= 2;
        }
        return ans;
    }
};