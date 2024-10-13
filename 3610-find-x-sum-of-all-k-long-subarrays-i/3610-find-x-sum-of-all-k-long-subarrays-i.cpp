class Solution {
public:
    vector<int> findXSum(vector<int>& nums, int k, int x) {
        vector<int> ans;
        for(int i=0; i<=nums.size()-k; i++){
            map<int,int> mp;
            priority_queue<pair<int,int>> pq;
            for(int j=i; j<i+k; j++){
                mp[nums[j]]++;
            }
            for(auto it:mp){
                pq.push({it.second,it.first});
            }
            int temp = x;
            int sum = 0;
            while(temp>0 && !pq.empty()){
                //cout<<pq.top().first<<" "<<pq.top().second<<endl;
                sum+=pq.top().second*pq.top().first;
                pq.pop();
                temp--;
            }
            ans.push_back(sum);
        }
        return ans;
    }
};