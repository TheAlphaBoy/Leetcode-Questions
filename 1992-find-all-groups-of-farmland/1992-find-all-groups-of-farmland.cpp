class Solution {
public:

    void dfs(int i, int j, vector<vector<int>>& land, vector<vector<int>>& hash,int &x1, int &y1, int &x2, int &y2, int &n, int &m){
        if(i<n && j<m && land[i][j]==1 && hash[i][j]==0){
            hash[i][j] = 1;
            x1 = min(x1,i);
            x2 = max(x2,i);
            y1 = min(y1,j);
            y2 = max(y2,j);
            //going left -> right
            dfs(i,j+1,land,hash,x1,y1,x2,y2,n,m);

            //going top-> bottom
            dfs(i+1,j,land,hash,x1,y1,x2,y2,n,m);
        }

    }

    vector<vector<int>> findFarmland(vector<vector<int>>& land) {

        int n = land.size();
        int m = land[0].size();
        vector<vector<int>> hash(n,vector<int>(m,0));
        vector<vector<int>>sol;
        for(int i = 0;i<n;i++){
            for(int j = 0;j<m;j++){
                if(land[i][j] == 1 && hash[i][j]==0){
                    int x1=INT_MAX,y1=INT_MAX,x2=0,y2=0;
                    dfs(i,j,land,hash,x1,y1,x2,y2,n,m);
                    vector<int> temp = {x1,y1,x2,y2};
                    sol.push_back(temp);
                }
            }
        }

        return sol;
        
    }
};