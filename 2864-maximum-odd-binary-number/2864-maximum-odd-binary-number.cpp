class Solution {
public:

// Ref : https://leetcode.com/problems/maximum-odd-binary-number/solutions/4083763/c-pyhton-java-solution-in-o-n-beats-100

    string maximumOddBinaryNumber(string s) {

        int ones =0;
        int n=s.length();
        for(int i=0;i<n;i++){
            ones += s[i]-'0';
        }
        int zeros = n-ones;
        string ans ="";
        for(int i=0;i<ones-1;i++){
            ans.push_back('1');
        }
        for(int i=0;i<zeros;i++){
            ans.push_back('0');
        }
        ans.push_back('1');
        return ans;
    }
};