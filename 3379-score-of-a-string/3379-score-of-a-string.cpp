class Solution {
public:
    int scoreOfString(string s) {

        int n = s.length();
        int sum = 0;
        for(int i=0;i<n-1;++i){
            int ans = abs((s[i]-'0') - (s[i+1]-'0'));
            sum += ans;
        }
        return sum;
    }
};