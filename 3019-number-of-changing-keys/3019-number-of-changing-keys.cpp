class Solution {
public:
    int countKeyChanges(string s) {
        
        // Base case
        
        if(s.empty()) 
            return 0;
        int last_k=tolower(s[0]);
        int count=0;
        for(int i=1;i<s.length();i++){
            int curr_k=tolower(s[i]);
            if(curr_k != last_k){
                count++;
                last_k=curr_k;
            }
        }
        return count;
        
    }
};