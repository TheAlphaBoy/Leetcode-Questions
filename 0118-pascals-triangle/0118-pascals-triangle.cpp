class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        
        vector<vector<int>> ans;
        if(numRows <= 0){
            return ans;
        }

            ans.push_back(vector<int>(1,1));

        if(numRows == 1){
            return ans;
        }
            ans.push_back(vector<int>(2 , 1));


        if(numRows == 2){
            return ans;
        }

      

        for(int  i = 2; i < numRows; i ++){
            vector<int> temp;

      temp.push_back(1);
            int previousRow = i-1;

            for(int j = 0; j < ans[previousRow].size()-1;j++){
                temp.push_back(ans[previousRow][j]+ans[previousRow][j+1]);
            }

                temp.push_back(1);

                ans.push_back(temp);
        }

        return ans;
    }
};