class Solution {
public:
    int countMatchingSubarrays(vector<int>& nums, vector<int>& pattern) {
        
        int m=nums.size();
        int n=pattern.size();
        int cnt=0;
        for(int i=0;i<m-n;++i){
            bool match=true;
            for(int k=0;k<n;++k){
                if( (pattern[k]==1 && nums[i+k+1]<=nums[i+k]) || (pattern[k]==0 && nums[i+k+1]!=nums[i+k]) || (pattern[k]==-1 && nums[i+k+1]>=nums[i+k]) ){
                        match=false;
                    break;
                }
            }
            if(match){
                cnt++;
            }
        }
        return cnt;
        
    }
};