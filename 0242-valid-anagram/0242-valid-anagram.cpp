class Solution {
public:

// sol 1 : sorting approach

// bool isAnagram(string s, string t) {

//     sort(s.begin(),s.end());
//     sort(t.begin(),t.end());

//     return s==t;

//     }


// sol 2 : Optimized approach

    bool isAnagram(string s, string t) {

        vector<int>cnt(26,0);
        for(auto ch : s){
            cnt[ch-'a']++;
        }
        for(auto ch : t){
            cnt[ch-'a']--;
        }

        // you can use simple for loop
        // bool flag=true;
        // for(int i=0;i<26;i++){
        //     if(cnt[i]!=0){
        //         flag=false;;
        //     }
        // }
        // return flag;

        // you can also use this STL library

        bool allzeros=all_of(begin(cnt),end(cnt),[](int element){
            return element==0;
        });

        return allzeros;
        
    }

};