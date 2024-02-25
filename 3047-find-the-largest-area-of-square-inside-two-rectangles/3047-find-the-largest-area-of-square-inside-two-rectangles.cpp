class Solution {
public:
    long long largestSquareArea(vector<vector<int>>& bottomLeft, vector<vector<int>>& topRight) {
        
        int n = bottomLeft.size();
        bool interacted=false;
        long int maxiArea = 0;
        
        for (int i = 0; i < n; ++i) {
            for (int j = i + 1; j < n; ++j) {
                int a = max(bottomLeft[i][0], bottomLeft[j][0]);
                int b = max(bottomLeft[i][1], bottomLeft[j][1]);
                int c = min(topRight[i][0], topRight[j][0]);
                int d = min(topRight[i][1], topRight[j][1]);
                
                if (a < c && b < d) {
                    interacted=true;
                    int sidelen = min(c - a, d - b);
                    maxiArea = max(maxiArea, (long)sidelen * sidelen);
                }
            }
        }
        if(!interacted){
            return 0;
        }
        else{
            return maxiArea;
        }
        
    }
};