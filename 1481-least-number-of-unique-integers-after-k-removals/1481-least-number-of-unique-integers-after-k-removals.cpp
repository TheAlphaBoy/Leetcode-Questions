class Solution {
public:

// Ref : https://leetcode.com/problems/least-number-of-unique-integers-after-k-removals/solutions/4734344/best-approach-using-map-sorting

    int findLeastNumOfUniqueInts(vector<int>& arr, int k) {

        unordered_map<int, int> mp;
        for (int& x : arr) {
            mp[x]++;
        }
        
        vector<int> freq;
        for (auto& pair : mp) {
            freq.push_back(pair.second);
        }
        
        sort(begin(freq), end(freq));
        
        int count = 0;
        for (int& f : freq) {
            if (k >= f) {
                k -= f;
                count++;
            } else {
                break;
            }
        }
        
        return freq.size() - count;
        
    }
};