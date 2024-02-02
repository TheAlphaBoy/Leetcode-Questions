class Solution {

// Ref : https://leetcode.com/problems/sort-characters-by-frequency/solutions/2544705/c-simple-code-easy-to-understand-lesser-than-10ms

public:

// Why is this "static" used?

// The Static keyword is used in the Compare function to ensure that it can be used 
// independently without requiring an instance of the class (Object).

static bool cmp(pair<char,int>&a,pair<char,int>&b){
    return a.second>b.second;
}

    string frequencySort(string s) {

        // Why we used map function instead of unordered map
        // Reason : The elements in a map are always sorted based on the key. This means that
        // when you iterate over a map, the elements are presented in a sorted order.

        map<char,int>mp;
        for(char ch:s){
            mp[ch]++;
        }
        vector<pair<char,int>>ans;
        for(auto it:mp){
            ans.push_back(it);
        }
        sort(ans.begin(),ans.end(),cmp);
        string res="";
        for(auto it:ans){
            int temp=it.second;
            while(temp--){
                res += it.first;
            }
        }
        return res;
        
    }
};