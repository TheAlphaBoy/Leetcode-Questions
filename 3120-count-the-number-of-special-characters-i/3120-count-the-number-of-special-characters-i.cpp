class Solution {
public:
    int numberOfSpecialChars(string word) {
        
        std::unordered_set<char> ans;

        for (char ch : word) {
            if (tolower(ch) != toupper(ch) && word.find(tolower(ch)) != string::npos && word.find(toupper(ch)) != string::npos) {
                ans.insert(tolower(ch));
            }
        }

        return ans.size();
    }
};