class Solution {
public:

// Using DFS (Same Approach as island perimeter question)
// TC => O(N)
// SC => O(1)

void dfs(vector<vector<char>>& grid,int i,int j,int m,int n){
    if(i<0 || i>=m || j<0 || j>=n || grid[i][j] != '1'){
        return;
    }
    // if(grid[i][j]=='&'){
    //     return;
    // }
    grid[i][j] = '$'; // marked visited

    dfs(grid,i+1,j,m,n);
    dfs(grid,i-1,j,m,n);
    dfs(grid,i,j+1,m,n);
    dfs(grid,i,j-1,m,n);
}

    int numIslands(vector<vector<char>>& grid) {

        int m = grid.size();
        int n = grid[0].size();
        int island = 0;

        for(int i=0;i<m;++i){
            for(int j=0;j<n;++j){
                if(grid[i][j]=='1'){
                    dfs(grid,i,j,m,n);
                    island += 1;
                }
            }
        }
        return island;
    }
};