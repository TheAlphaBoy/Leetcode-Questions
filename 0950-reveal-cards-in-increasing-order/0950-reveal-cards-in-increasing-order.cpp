class Solution {
public:
    vector<int> deckRevealedIncreasing(vector<int>& deck) {

        // TC => O(n*log n + n*log n) ~ O(n*log n)
        // SC => O(N), it's result space (auxilury space),jisko generally include nhi karte hai

        sort(deck.begin(),deck.end());
        int i=0;
        int j=0;
        int n=deck.size();
        vector<int>ans(n,0);
        bool skip=false;
        while(i<n){
            if(ans[j]==0){
                if(skip==false){
                    ans[j]=deck[i];
                    ++i;
                }
                skip = !skip;
            }
            j=(j+1)%n;
        }
        return ans;
    }
};