class Solution {
public:
    int myAtoi(string s) {
        if (s.empty()) return 0;
        int i = 0, sign = 1;
        while (i + 1 < s.size() && isspace(s[i])) ++i;
        long res = 0;
        if (s[i] == '-' || s[i] == '+') sign = 44 - s[i++];
        while (i < s.size()) {
            if (isdigit(s[i])) res = 10 * res + s[i++] - '0';
            else return res * sign;
            if (res > INT_MAX) return sign == -1 ? INT_MIN : INT_MAX;
        }
        return res * sign;
    }
};