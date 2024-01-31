class Solution {

// Ref : https://leetcode.com/problems/daily-temperatures/solutions/844524/c-stack-vs-array-based-solutions-compared-and-explained-100-time-80-space

public:
    vector<int> dailyTemperatures(vector<int>& temp) {

        int n = temp.size();
        stack<int> s;
        s.push(n - 1);
        vector<int> ans(n);

        for (int i = n - 2, n; i >=0; --i) {
            n = temp[i];
            while (s.size() && n >= temp[s.top()]) s.pop();
            if (s.size()) ans[i] = s.top() - i;
            s.push(i);
        }
        return ans;
        
    }
};