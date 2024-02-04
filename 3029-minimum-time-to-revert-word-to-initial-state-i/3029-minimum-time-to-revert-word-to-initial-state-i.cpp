class Solution {
public:
    int minimumTimeToInitialState(string word, int k) {
        
        int t = 0;
        int n = word.size();
        
        for(int i=0;i<n;i+=k)

        {   

            string word_1 = word.substr(i,n-1);

            string word_2 = word.substr(0, n-i);

            if (word_1 == word_2) 
                return t;
            else
                    t++;

        }
            return t;
        
    }
};