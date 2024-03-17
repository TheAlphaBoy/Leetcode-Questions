class Solution {

    // Ref : https://leetcode.com/problems/insert-interval/solutions/1327206/99-16-faster-proper-explaination-c-solution-o-n

public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {

        // Time complexity - O(N)
        // space complexity - O(1)

        int n = intervals.size();
        int i=0;
        vector<vector<int>>ans;
        while(i<n && intervals[i][1]<newInterval[0]){
            ans.push_back(intervals[i]);
            ++i;
        }
        while(i<n && intervals[i][0]<=newInterval[1]){
            newInterval[0] = min(intervals[i][0],newInterval[0]);
            newInterval[1] = max(intervals[i][1],newInterval[1]);
            ++i;
        }
        ans.push_back(newInterval);
        while(i<n){
            ans.push_back(intervals[i]);
            ++i;
        }
        return ans;
    }
};