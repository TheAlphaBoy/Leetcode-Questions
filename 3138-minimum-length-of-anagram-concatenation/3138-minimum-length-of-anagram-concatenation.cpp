class Solution {
public:
    int minAnagramLength(string s) {
        int n = s.length();
        std::unordered_map<char, int> freq;

        for (char c : s)
            freq[c]++;

        for (int t = 1; t <= n; t++) {
            if (n % t == 0) {
                bool divisible = true;
                for (const auto& p : freq) {
                    if (p.second % (n / t) != 0) {
                        divisible = false;
                        break;
                    }
                }
                if (divisible) {
                    return t;
                }
            }
        }
        return n;
    }
};