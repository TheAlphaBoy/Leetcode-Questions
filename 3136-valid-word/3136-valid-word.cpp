class Solution {
public:
    bool isValid(string word) {
        
        // Check if the word has at least 3 characters
        if (word.size() < 3)
            return false;

        bool has_vowel = false;
        bool has_consonant = false;

        // Iterate through each character in the word
        for (char c : word) {
            // Check if the character is a letter or a digit
            if (isalnum(c)) {
                // Check if the character is a vowel
                if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
                    has_vowel = true;
                }
                // Check if the character is a consonant
                else if (isalpha(c)) {
                    has_consonant = true;
                }
            }
            // If the character is not a letter or digit, the word is invalid
            else {
                return false;
            }
        }

        // Check if the word contains at least one vowel and one consonant
        return has_vowel && has_consonant;
        
    }
};