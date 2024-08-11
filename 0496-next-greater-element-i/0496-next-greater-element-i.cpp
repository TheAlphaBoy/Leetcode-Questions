class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {

        // unordered_map<int,int>umap;
        // stack<int>st;
        // for(int i=nums2.size()-1;i>=0;--i){
        //     int elem=nums2[i];
        //     while(!st.empty() && st.top()<=elem){
        //         st.pop();
        //     }
        //     int ans=st.empty()?-1:st.top();
        //     umap.insert({elem,ans});
        //     st.push(elem);
        // }
        // vector<int>final;
        // for(auto p:nums1){
        //     final.push_back(umap[p]);
        // }
        // return final;

        // Revision :

        unordered_map<int,int>mp;
        stack<int>st;
        for(int i=nums2.size()-1;i>=0;--i){
            int elem=nums2[i];
            while(!st.empty() && st.top()<=elem){
                st.pop();
            }
            int ans=st.empty()?-1:st.top();
            mp.insert({elem,ans});
            st.push(elem);
        }
        vector<int>res;
        for(auto it:nums1){
            res.push_back(mp[it]);
        }
        return res;
    }
};





















