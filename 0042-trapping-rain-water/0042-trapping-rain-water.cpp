class Solution {
public:
    int trap(vector<int>& height) {

        int n=height.size();
        vector<int>mxl(n);
        vector<int>mxr(n);
        vector<int>water(n);
        mxl[0]=height[0];
        for(int i=1;i<n;i++){
            mxl[i]=max(height[i],mxl[i-1]);
        }
        mxr[n-1]=height[n-1];
        for(int i=n-2;i>=0;i--){
            mxr[i]=max(height[i],mxr[i+1]);
        }
        for(int i=0;i<n;i++){
            water[i]=min(mxl[i],mxr[i]) - height[i];
        }
        int sum=0;
        for(int i=0;i<n;i++){
            sum += water[i];
        }
        return sum;
        
    }
};