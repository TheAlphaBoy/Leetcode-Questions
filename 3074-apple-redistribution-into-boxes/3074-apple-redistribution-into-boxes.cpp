class Solution {
public:
    int minimumBoxes(vector<int>& apple, vector<int>& capacity) {
        
        int sum=0;
        
        for(int i=0;i<apple.size();++i){
            sum += apple[i];
        }
        
        sort(capacity.begin(),capacity.end(),greater<int>());
        int cnt=0;
        
        for(int i=0;i<capacity.size();++i){
            sum -= capacity[i];
            ++cnt;
            if(sum<=0){
                break;
            }
        }
        return cnt;
        
    }
};