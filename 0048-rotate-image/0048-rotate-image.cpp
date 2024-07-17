class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {

        // Brute force : TC=>O(N^2) & SC=>O(N^2)

        // int n=matrix[0].size();
        // int arr[n][n];
        // for(int i=0;i<n;++i){
        //     for(int j=0;j<n;++j){
        //         arr[j][n-1-i] = matrix[i][j];
        //     }
        // }
        // for(int i=0;i<n;++i){
        //     for(int j=0;j<n;++j){
        //         matrix[i][j] = arr[i][j];
        //     }
        // }

        // Sol 2 : Optimized sol : TC => O(N*N) , SC=>O(1)

        int n = matrix.size();
        for (int i = 0; i < n; i++) {
            for (int j = i; j < n; j++) {
                swap(matrix[i][j], matrix[j][i]);
            }
            reverse(matrix[i].begin(), matrix[i].end());
        }

    }
};