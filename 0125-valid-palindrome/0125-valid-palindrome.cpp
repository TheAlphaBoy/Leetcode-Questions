class Solution {
public:
    bool isPalindrome(string s) {

        int start=0;
        int end=s.length();
        while(start<=end){
            // is not alpha numeric
            if(! isalnum(s[start])){start++;continue;}
            if(! isalnum(s[end])){end--;continue;}
            //is alpha numeric
            if(tolower(s[start]) != tolower(s[end])){return false;}
            else{
                start++;
                end--;
            }

        }
        return true;
        
    }
};