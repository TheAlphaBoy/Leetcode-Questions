class Solution {
public:
    vector<string> stringSequence(string target) {
        int n=target.size();
        vector<string> ans;
        string word="";
        for (int i=0; i<n; i++){
            char c;
            for(c='a'; c<=target[i]; c++){
                ans.push_back(word+c);
            }
            word+=(c-1);
        }
        return ans;
    }
};