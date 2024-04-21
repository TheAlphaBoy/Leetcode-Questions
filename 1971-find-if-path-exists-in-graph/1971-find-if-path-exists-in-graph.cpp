class Solution {
public:

    void dfs(int node, vector<int>adj[], vector<int>&vis){
        vis[node] = 1;
        for(auto it:adj[node]){
            if(vis[it]!=1){
                dfs(it, adj, vis);
            }
        }
    }

    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        vector<int>adj[n+1];
            for(int i=0; i<edges.size(); i++){
                adj[edges[i][0]].push_back(edges[i][1]);
                adj[edges[i][1]].push_back(edges[i][0]);
            }
            vector<int>vis(n+1, 0);
            dfs(source, adj, vis);
            if(vis[destination]==1){
                return true;
            }
            return false;
    }
};