class Solution {
public:
    long long validSubstringCount(string word1, string word2) {
        int size1 = word1.size();
        int size2 = word2.size();
        // store char frequency for word2
        vector<int> freq2(26, 0);   // only lowercase letters
        for(auto c: word2)
            freq2[c - 'a']++;
        
        // Sliding Window
        long long ans = 0;
        vector<int> freq(26, 0);
        for(int l=0, r=0; r<size1; r++) {
            // expand right
            freq[word1[r] - 'a']++;

            // Compare -> update ans -> shrink left
            while(compare(freq, freq2)) {
                ans += size1 - r;   // Update ans
                // Shrink left
                freq[word1[l] - 'a']--;
                l++;  
            }        
        }
        return ans;
    }
    bool compare(vector<int>& freq1, vector<int>& freq2){
        int k = 0;
        while(k <= 25){
            if(freq1[k] >= freq2[k])
                k++;
            else 
                break;
        }
        if(k == 26) 
            return true;
        return false;
    }
};