class Solution {
public:
    int countSubmatrices(vector<vector<int>>& grid, int k) {
        
        int cnt = 0;
        int rows = grid.size();
        int cols = grid[0].size();

        // Preprocessing step
        for (int i = 0; i < rows; i++) {
            for (int j = 1; j < cols; j++) {
                grid[i][j] += grid[i][j - 1];
            }
        }

        // Count submatrices
        for (int j = 0; j < cols; j++) {
            int sum = 0;
            for (int i = 0; i < rows; i++) {
                sum += grid[i][j];
                if (sum <= k) {
                    cnt++;
                }
            }
        }

        return cnt;
        
    }
};