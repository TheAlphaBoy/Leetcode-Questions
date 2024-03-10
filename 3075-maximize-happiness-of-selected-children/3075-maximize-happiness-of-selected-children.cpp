class Solution {
public:
    long long maximumHappinessSum(vector<int>& happiness, int k) {
        
        long long summ=0;
        int size=happiness.size()-1;
        int cnt=0;
        sort(happiness.begin(),happiness.end());
        while(size>=0 && k>0){
            summ += max(0,happiness[size] - cnt++);
            --size;--k;
        }
        return summ;
    }
};