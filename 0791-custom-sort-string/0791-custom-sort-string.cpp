class Solution {
public:
    // string customSortString(string S, string T) {

        // string s1, s2;
        // int a[26]={0};
        // for(char c: S) a[c-'a']++;
        // for(char c: T){
        //     if(a[c-'a']==0) s2+=c;
        //     else a[c-'a']++;
        // }
        // for(char c: S){
        //     while(a[c-'a']>1){
        //         s1+=c; 
        //         a[c-'a']--;
        //     } 
        // }
        // return s1+s2;
    // }

    // Revision : 

    string customSortString(string order, string s) {

        string s1,s2;
        int arr[26]={0};
        for(char it:order){
            arr[it-'a']++;
        }
        for(char ch : s){
            if(arr[ch - 'a']==0){
                s2 += ch;
            }
            else{
                arr[ch-'a']++;
            }
        }
        for(char ch : order){
            while(arr[ch - 'a'] > 1){
                s1 += ch;
                arr[ch-'a']--;
            }
        }
        return s1+s2;
    }

};



















