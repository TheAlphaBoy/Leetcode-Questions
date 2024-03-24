class Solution {
public:
    int maximumLengthSubstring(string s) {
        
        int l=0;
        int r=0;
        int maxi_len=0;
        unordered_map<int,int>mp;
        for(int r=0;r<s.length();++r){
            if(mp.find(s[r]) != mp.end()){
                mp[s[r]]++;
                while(mp[s[r]] > 2){
                    mp[s[l]]--;
                    if(mp[s[l]]==0){
                        mp.erase(s[l]);
                    }
                    ++l;
                }
            }
            else{
                mp[s[r]]++;
            }
            maxi_len = max(maxi_len,r-l+1);
        }
        return maxi_len;
    }
};