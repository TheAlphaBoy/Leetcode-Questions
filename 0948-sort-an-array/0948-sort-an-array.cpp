class Solution {

    // sol 1 : Using Recursion ( TLE occurs )

//     private:
//     void sort(vector<int>& v){
//         // Base condition
//         if(v.size()==1)
//         return;
//         // Hypothesis step
//         int ans=v[v.size()-1];
//         v.pop_back();
//         sort(v);
//         // Induction step
//         insert(v,ans);

//     }
//     void insert(vector<int>&v,int ans){
//         // BC
//         if(v.size()==0 || v[v.size()-1]<=ans){
//             v.push_back(ans);
//             return;
//         }
//         // Hypothesis step
//         int temp=v[v.size()-1];
//         v.pop_back();
//         insert(v,ans);
//         //   Induction Step
//         v.push_back(temp);
//         return;

//     }
// public:
//     vector<int> sortArray(vector<int>& nums) {

//         sort(nums);
//         return nums;
        
//     }

// sol 2 : Using Merge sort Algorithm ( No TLE )

void merge(vector<int>&nums,int low,int mid,int high){
    vector<int>temp;
    int left = low;
    int right = mid+1;
    while(left<=mid && right<=high){
        if(nums[left]<=nums[right]){
            temp.push_back(nums[left]);
            ++left;
        }
        else{
            temp.push_back(nums[right]);
            ++right;
        }
    }
    while(left<=mid){
        temp.push_back(nums[left]);
        ++left;
    }
    while(right<=high){
        temp.push_back(nums[right]);
        ++right;
    }
    for(int i=low;i<=high;++i){
        nums[i] = temp[i-low];
    }

}

void mergeSort(vector<int>&nums,int low,int high){
    // BC
    if(low==high){
        return;
    }
    int mid = (low+high)/2;
    mergeSort(nums,low,mid);
    mergeSort(nums,mid+1,high);
    merge(nums,low,mid,high);
}

public:
    vector<int> sortArray(vector<int>& nums) {

        mergeSort(nums,0,nums.size()-1);
        return nums;
    }
    
};



















