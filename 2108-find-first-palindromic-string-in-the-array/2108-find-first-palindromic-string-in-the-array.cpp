class Solution {

public:
    string firstPalindrome(vector<string>& words) {

        // For Brute force solution : (Takes more Time but less memory)
// Ref : https://leetcode.com/problems/find-first-palindromic-string-in-the-array/solutions/4717953/basic-solution-beginner-friendly-easy-to-understand-loop-basics-explained-step-by-step

        // for(int i=0;i<words.size();i++){
        //     bool ispalindrome = true;
        //     int n=words[i].length();

        //     for(int j=0;j<n/2;j++){
        //         if(words[i][j] != words[i][n-j-1]){
        //             ispalindrome = false;
        //             break;
        //         }
        //     }
        //     if(ispalindrome){
        //         return words[i];
        //     }
        // }
        // return "";

        // Sol 2 : Little Optimized solution (Takes less time but more memory)
// Ref : https://leetcode.com/problems/find-first-palindromic-string-in-the-array/solutions/4718286/beats-100-3-lines-code-easiest-soln-ever-beginner-friendly-just-iteration

            // for( string it : words){

            //     string rev_words(it.rbegin(),it.rend());
            //     if(it == rev_words){
            //         return it;
            //     }
            // }
            // return "";

            // Sol 3 : Using Two pointers Approach (More efficeint in both time and space)
            // Takes Help from Chat GPT

            for(string & it : words) {
                int left = 0;
                int right = it.length()-1;
                while(left<right) {
                    if(it[left] != it[right]){
                        // Not a palindrome
                        break;
                    }
                    ++left;
                    --right;
                }
                if(left>=right){
                    //palindrome hai
                    return it;
                }
            }
            return "";
    }
};