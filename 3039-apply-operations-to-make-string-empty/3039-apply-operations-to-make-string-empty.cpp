class Solution {
public:
    string lastNonEmptyString(string s) {
        
        vector<int>freq(26,0);
        for(char ch : s){
            freq[ch-'a']++;
        }
        int max_freq=*max_element(freq.begin(),freq.end());
        string ans="";
        for(int i=s.length()-1;i>=0;--i){
            char ch = s[i];
            if(freq[ch-'a']==max_freq){
                ans += ch;
                freq[ch-'a']=-1;
            }
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};