class Solution {
public:
    bool isIsomorphic(string s, string t) {

        // // Base case
        // if(s.length() != t.length())
        // return false;

        // // Now length are equal for both string
        // // their are total 256 character including all upper and lower cases letter
        // int arr1[256]={};
        // int arr2[256]={};
        // for(int i=0;i<s.length();i++){
        //     // if first time visiting then map and store it
        //     if(!arr1[s[i]] && !arr2[t[i]]){
        //         arr1[s[i]] = t[i];
        //         arr2[t[i]] = s[i];
        //     }
        //     else{
        //         if(arr1[s[i]] != t[i])
        //         return false;
        //     }
        // }
        // return true;

        // Revision :

        // Edge case :
        if(s.length() != t.length()){
            return false;
        }
        int arr1[256]={};
        int arr2[256]={};
        for(int i=0;i<s.length();++i){
            if(!arr1[s[i]] && !arr2[t[i]]){
                arr1[s[i]]=t[i];
                arr2[t[i]]=s[i];
            }
            else{
                if(arr1[s[i]] != t[i]){
                    return false;
                }
            }
        }
        return true;
    }
};






























