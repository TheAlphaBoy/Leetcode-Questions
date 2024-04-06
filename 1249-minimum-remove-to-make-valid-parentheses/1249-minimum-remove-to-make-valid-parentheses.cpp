class Solution {
public:
    string minRemoveToMakeValid(string s) {

        stack<int> t1; 
        for(int j = 0; j < s.length(); j++) {
            if(s[j] == '(' )
             {
                t1.push(j); 
            } else if(s[j] == ')') {
                if(t1.empty()) {
                    s.erase(j, 1);
                    j--; 
                } else {
                    t1.pop();
                }
            }
        }
        
       
        while(!t1.empty()) {
            int index = t1.top();
            t1.pop();
            s.erase(index, 1);
        }

        return s;
        
    }
};