class Solution {
public:
    vector<int> resultArray(vector<int>& nums) {
        
        int n=nums.size();
        vector<int>arr1={nums[0]};
        vector<int>arr2={nums[1]};
        for(int i=2;i<n;i++){
            if(arr1[arr1.size()-1] > arr2[arr2.size()-1]){
                arr1.push_back(nums[i]);
            }
            else{
                arr2.push_back(nums[i]);
            }
        }
        arr1.insert(arr1.end(),arr2.begin(),arr2.end());
        return arr1;
    }
};