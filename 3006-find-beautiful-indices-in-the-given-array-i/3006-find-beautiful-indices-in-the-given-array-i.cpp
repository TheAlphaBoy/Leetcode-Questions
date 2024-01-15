class Solution {

    // Method 1 : Brute force Approach
    private:
    vector<int>findoccur(const string& s,const string& str){
        vector<int>indices;
        size_t index=s.find(str);
        while(index!=string :: npos){
            indices.push_back(static_cast<int>(index));
            index=s.find(str,index+1);
        }
        return indices;
    }
public:
    vector<int> beautifulIndices(string s, string a, string b, int k) {

        vector<int>first=findoccur(s,a);
        vector<int>second=findoccur(s,b);
        vector<int>ans;
        for(int i=0;i<first.size();i++){
            for(int j=0;j<second.size();j++){
                if(second[j]!=-1){
                    if(abs(first[i]-second[j])<=k){
                        ans.push_back(first[i]);
                        break;
                    }
                }
            }
        }
        return ans;

    }
};