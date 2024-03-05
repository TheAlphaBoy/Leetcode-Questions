class Solution {
public:
    int minimumLength(string s) {

        int start=0;
        int end=s.length()-1;
        while(start<end && s[start]==s[end]){
            char curr_char = s[start];
            while(start<=end && s[start]==curr_char){
                ++start;
            }
            while(start<=end && s[end]==curr_char){
                --end;
            }
        }
        return (end-start+1);
    }
};