class Solution {
public:

// Ref : https://leetcode.com/problems/find-the-original-array-of-prefix-xor/solutions/4228903/c-easiest-solution-bit-manipulation-o-n

    vector<int> findArray(vector<int>& pref) {

        int n = pref.size();
        for(int i=n-1;i>0;i--){
            pref[i]=pref[i-1]^pref[i];
        }
        return pref;
    }
};