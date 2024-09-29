class Solution {
public:
    int countOfSubstrings(string word, int k) {
        int n = word.length();
        int totalCount = 0;

        for (int i = 0; i < n; ++i) {
            int cnt = 0;
            int consonants = 0;
            unordered_set<char> vowels;
            
            for (int j = i; j < n; ++j) {
                if (isVowel(word[j])) {
                    cnt++;
                    vowels.insert(word[j]);
                }
                else{
                    consonants++;
                }

                if (consonants == k && vowels.size() == 5) {
                    totalCount++;
                }
            }
        }
        return totalCount;
    }
    bool isVowel(char ch) {
    return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
    }
};