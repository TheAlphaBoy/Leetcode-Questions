class Solution {
public:
    // string triangleType(vector<int>& nums) {
    
//}
        
        // wrong Approach
        
        // unordered_map<int,int>mp;
        // for(int i:nums){
        //     mp[i]++;
        // }
        // string s="none";
        // for(auto it:mp){
        //     if(it.second==3){
        //         s="equilateral";
        //     }
        //     else if(it.second==2){
        //         s="isosceles";
        //     }
        //     else if(it.second==1){
        //         s="scalene";
        //         break;
        //     }
        // }
        // return s;
        
        // correct Approach
        
        // base condition
    string triangleType(vector<int>& nums) {
        if(nums.size() != 3){
            return "none";
        }
        sort(nums.begin(),nums.end());
        
        if(nums[0]+nums[1] > nums[2]) { // triangle is valid
            // checking which tyoe of triangle it is
            
            if(nums[0]==nums[1] && nums[1]==nums[2]){
                return "equilateral";
            }
            else if(nums[0]==nums[1] || nums[1]==nums[2]){
                return "isosceles";
            }
            else{
                return "scalene";
            }
        }
        else{// invalid triangle
            return "none";
        }
        
    }
};