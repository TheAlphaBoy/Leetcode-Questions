class Solution {
public:
    int countPrefixSuffixPairs(vector<string>& words) {
        
        int n=words.size();
        int cnt=0;
        for(int i=0;i<n;++i){
            for(int j=i+1;j<n;++j){
                
                if(isprefix_and_suffix(words[i],words[j])){
                    cnt++;
                }
            }
        }
        return cnt;        
    }
    bool isprefix_and_suffix(string& a,string& b){
        // Check if prefix is a prefix of suffix
        if (b.find(a) == 0) {
            // Check if suffix starts with the remaining characters of prefix
            return b.substr(b.length() - a.length()) == a;
        }
        return false;
    }
};