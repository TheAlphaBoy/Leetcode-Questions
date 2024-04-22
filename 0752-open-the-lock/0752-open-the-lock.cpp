class Solution {
public:
    int openLock(vector<string>& deadends, string target) {
        unordered_map<string,int> mp;
        unordered_map<string,int> deadend;
        for(int i=0;i<deadends.size();i++)
            deadend[deadends[i]] = 1;
        if (deadend.find("0000") != deadend.end())
            return -1;
        priority_queue <pair<int,string>, vector<pair<int,string>>, greater<pair<int,string>> > pq; 
        pq.push({0,"0000"});
        mp["0000"] = 0;
        while(!pq.empty()){
            pair<int,string> p = pq.top();
            pq.pop();
            int dst = p.first;
            string temp = p.second;
            for(int i=0;i<4;i++){
                string s = temp;
                if (s[i] == '9')
                    s[i] = '0';
                else
                    s[i]++;
                if (deadend.find(s) == deadend.end()){
                    if ((mp.find(s) != mp.end() && dst + 1 < mp[s]) || (mp.find(s) == mp.end())){
                        mp[s] = dst+1;
                        pq.push({mp[s],s});
                    }
                }
                string s1 = temp;
                if (s1[i] == '0')
                    s1[i] = '9';
                else
                    s1[i]--;
                if (deadend.find(s1) == deadend.end()){
                    if ((mp.find(s1) != mp.end() && dst + 1 < mp[s1]) || (mp.find(s1) == mp.end())){
                        mp[s1] = dst+1;
                        pq.push({mp[s1],s1});
                    }
                }
            }
        }
        if (mp.find(target) == mp.end())
            return -1;
        return mp[target];
    }
};