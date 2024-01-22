class Solution {
public:

bool checkpalindrome(int i,vector<char>&str,int strlength){

    // BC
    if(i>=strlength/2){
        return true;
    }
    // Hypothesis step

    if(str[i] != str[strlength-i-1]){
        return false;
    }
    return checkpalindrome(i+1,str,strlength);

    // No inducion step as current step is not depend on previous step
    
}

bool isPalindrome(string s) {

    vector<char> str;
    for(int i=0;i<s.length();i++){
        if((s[i] >= 'a' && s[i]<= 'z') || s[i]>='0' && s[i]<='9'){
            str.push_back(s[i]);
        }
        else if(s[i]>='A' && s[i]<='Z'){
            int change=tolower(s[i]);
            str.push_back(change);
        }
    }
    int strlength = str.size();
    if(checkpalindrome(0,str,strlength)){
        return true;
    }
    else{
        return false;
    }

}

        // bool isPalindrome(string s) {

        // sol 1 : Two pointers approach

        // int start=0;
        // int end=s.length();
        // while(start<=end){
        //     // is not alpha numeric
        //     if(! isalnum(s[start])){start++;continue;}
        //     if(! isalnum(s[end])){end--;continue;}
        //     //is alpha numeric
        //     if(tolower(s[start]) != tolower(s[end])){return false;}
        //     else{
        //         start++;
        //         end--;
        //     }

        // }
        // return true;
        
        // }
};