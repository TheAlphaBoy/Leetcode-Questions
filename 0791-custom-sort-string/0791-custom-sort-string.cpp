class Solution {
public:
    string customSortString(string S, string T) {

        string s1, s2;
        int a[26]={0};
        for(char c: S) a[c-'a']++;
        for(char c: T){
            if(a[c-'a']==0) s2+=c;
            else a[c-'a']++;
        }
        for(char c: S){
            while(a[c-'a']>1){
                s1+=c; 
                a[c-'a']--;
            } 
        }
        return s1+s2;
        
    }
};