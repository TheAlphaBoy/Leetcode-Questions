class Solution {
public:
    vector<int> findAnagrams(string s, string p) {

        // p ->pattern
        // s->string, where i have to search the pattern (p)

        int k = p.length();
        int n = s.length();
        // Count pattern ke characters
        unordered_map<char,int>mpat;

        for (auto &x : p){
            mpat[x]++;
        }
        // for(int i=0;i<k;i++){
        //     mpat[s[i]]++;
        // }
        // Count unique elements size
        int cnt = mpat.size();
        vector<int>ans;
        int i=0;int j=0;
        while(j<n){
            // Calculations
            // Search p in s
            if(mpat.find(s[j]) != mpat.end()){
                mpat[s[j]]--;
                if(mpat[s[j]]==0){
                    cnt--;
                }
            }
            // Expand the window
            if(j-i+1<k){
                j++;
            }
            else if(j-i+1==k){
                if(cnt==0){
                    ans.push_back(i);
                }
                // Remove previous calculation
                if(mpat.find(s[i]) != mpat.end()){
                    mpat[s[i]]++;
                    if(mpat[s[i]]==1){
                        cnt++;
                    }
                }
                i++;
                j++;
            }
        }
        return ans;
    }
};