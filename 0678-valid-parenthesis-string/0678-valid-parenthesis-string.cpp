class Solution {
public:
    bool checkValidString(string s) {

        // Time complexity:O(n)
        // Space complexity:O(n)

        int n=s.length();
        stack<int>open,star;
        for(int i=0;i<n;i++){
            if(s[i]=='(')open.push(i);
            else if(s[i]=='*')star.push(i);
            else{ // s[i]==')'
                if(!open.empty())open.pop();
                else if(!star.empty())star.pop();
                else return false;
            }
        }
        while(!open.empty()){
            if(star.empty())return false;
            else{
                if(open.top()>star.top())return false;
                else{
                    star.pop();
                    open.pop();
                }
            }
        }
        return true;

    }
};