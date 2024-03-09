class Solution {
public:
    // int strStr(string haystack, string needle) {

    //     // Brute Force Approach (or Naive Approach)
    //     // TC => O((N-M)*M) = O(N*M-M^2) = O(N*M) 

    //     // int n=haystack.length();
    //     // int m=needle.length();
    //     // for(int i=0;i<=n-m;++i){
    //     //     int first=i;int second=0;
    //     //     while(second<m){
    //     //         if(haystack[first] != needle[second]){
    //     //             break;
    //     //         }
    //     //         else{
    //     //             ++first;
    //     //             ++second;
    //     //         }
    //     //     }
    //     //     if(second==m)
    //     //     return first-second;
    //     // }
    //     // return -1;
    // }

        // SOL 2 : Using KMP Algorithm , TC=> O(M) + O(N) = O(N+M) , SC => O(M)

        void lpsfind(string needle,vector<int>&lps){
            int prefix=0;
            int suffix=1;
            while(suffix<needle.length()){
                if(needle[prefix] == needle[suffix]){
                    lps[suffix]=prefix+1;
                    ++prefix;
                    ++suffix;
                }
                else{
                    if(prefix==0){
                        lps[suffix]=0;
                        ++suffix;
                    }
                    else{
                        prefix=lps[prefix-1];
                    }
                }
            }
        }

        int strStr(string haystack, string needle) {

        vector<int>lps(needle.length(),0);
        lpsfind(needle,lps);
        int first=0;
        int second=0;
        while(first<haystack.length() && second<needle.length()){
            if(haystack[first]==needle[second]){
                ++first;
                ++second;
            }
            else{
                if(second==0){
                    ++first;
                }
                else{
                    second=lps[second-1];
                }
            }
        }
        if(second==needle.length())
        return first-second;
        else
        return -1;
    }
};