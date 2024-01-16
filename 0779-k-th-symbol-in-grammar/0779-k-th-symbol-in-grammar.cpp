class Solution {
public:
    int kthGrammar(int n, int k) {

        // This Q is based more on observation and a little bit use of recusion(HBI method)

        // BC 
        if(n==1 || k==1)
        return 0;
        // Hypothesis step
        int length=pow(2,n-1);
        int mid = length/2;
        if(k<=mid)
        // Hypothesis + Induction
        return kthGrammar(n-1,k);
        else
        return !kthGrammar(n-1,k-mid);
        
    }
};