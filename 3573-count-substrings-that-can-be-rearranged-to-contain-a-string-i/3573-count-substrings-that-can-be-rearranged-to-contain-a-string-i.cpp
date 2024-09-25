class Solution {
public:
    long long validSubstringCount(string s, string t) {
        vector<int>a(26,0);
        vector<int>b(26,0);
        for(auto x : t){
            b[x-'a']++;
        }
        int k=0;
        long long  count=0;
        int i=0;
        bool flag=false;
        for( i=0; i<s.length(); i++){

            if(flag==false)
            a[s[i]-'a']++;
             flag = true;
            for(int i=0; i<26; i++){
                if(a[i]<b[i]){
                    flag = false;
                    break;
                }
            }
            if(flag){
                count+=s.length()-i;
                a[s[k]-'a']--;
                k++;
                i--;
            }
            
        }
       
        return count;
    }
};