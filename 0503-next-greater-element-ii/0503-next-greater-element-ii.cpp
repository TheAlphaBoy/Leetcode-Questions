class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {

        // sol 1 : Brute force 

        // int n = nums.size();
        // vector<int> v(n, -1);
        
        // for (int i = 0; i < n; ++i) {
        //     int j = (i + 1) % n; // Use modulo to handle circular nature
            
        //     while (j != i && nums[j] <= nums[i]) {
        //         j = (j + 1) % n;
        //     }

        //     if (j != i) {
        //         v[i] = nums[j];
        //     }
        // }

        // return v;

        //sol 2: Optimized solution

        // as j is depend on i so using stack concept

        stack<int>st;
        int n=nums.size();
        vector<int>v(n,-1);
        for(int i=2*n-1;i>=0;--i){

            while(st.size()>0 && (nums[i%n]>=st.top())){
                st.pop();
            }
            if(st.size()>0 && (i<n)){
                v[i]=st.top();
            }
            st.push(nums[i%n]);
        }
        return v;

    }
};