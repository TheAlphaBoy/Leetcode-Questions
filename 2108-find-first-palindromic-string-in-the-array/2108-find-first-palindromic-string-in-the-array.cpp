class Solution {

// For Brute force solution : 
// Ref : https://leetcode.com/problems/find-first-palindromic-string-in-the-array/solutions/4717953/basic-solution-beginner-friendly-easy-to-understand-loop-basics-explained-step-by-step

public:
    string firstPalindrome(vector<string>& words) {

        for(int i=0;i<words.size();i++){
            bool ispalindrome = true;
            int n=words[i].length();

            for(int j=0;j<n/2;j++){
                if(words[i][j] != words[i][n-j-1]){
                    ispalindrome = false;
                    break;
                }
            }
            if(ispalindrome){
                return words[i];
            }
        }
        return "";
    }
};