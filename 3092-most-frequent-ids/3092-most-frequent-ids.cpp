class Solution {
public:

    typedef long long ll;

    vector<long long> mostFrequentIDs(vector<int>& nums, vector<int>& freq) {

        int n=nums.size();
        priority_queue<pair<ll,ll>>pq; // {freq,id} , sc = O(n)
        vector<ll>ans(n); // answer ki sc nhi calculate karte
        unordered_map<ll,ll>mp;// {id,freq} , sc = O(n)

        for(int i=0;i<n;++i){ // tc = O(n)
            int id=nums[i];
            int f = freq[i];
            mp[id] += freq[i];
            pq.push({mp[id],id}); // tc = O(log n)
            // check for stale entries
            while(mp[pq.top().second] != pq.top().first){ // tc = O(n)
                pq.pop(); // tc = O(log n)
            }
            ans[i] += pq.top().first;
        }
        return ans;

        // Overall , TC = O(n*(log n + n*log n) ~ O(n2 log n)
        // SC = O(2*n) ~ O(n)

    }
};