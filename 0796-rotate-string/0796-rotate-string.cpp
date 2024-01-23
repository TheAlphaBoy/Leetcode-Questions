class Solution {
public:
    bool rotateString(string s, string goal) {

        if(goal.length() != s.length()){
            return false;
        }
        for(int i=0;i<goal.length();i++){
            bool rotationPossible=true;
            for(int j=0;j<s.length();j++){
                if(goal[(i+j)% goal.length()] != s[j]){
                    rotationPossible=false;
                }
            }
            if(rotationPossible){
                return true;
            }
        }
        return false;
    }
};