class Solution {
public:
    bool rotateString(string s, string goal) {

        // sol 1 : Brute force method

        // if(goal.length() != s.length()){
        //     return false;
        // }
        // for(int i=0;i<goal.length();i++){
        //     bool rotationPossible=true;
        //     for(int j=0;j<s.length();j++){
        //         if(goal[(i+j)% goal.length()] != s[j]){
        //             rotationPossible=false;
        //         }
        //     }
        //     if(rotationPossible){
        //         return true;
        //     }
        // }
        // return false;

        // sol 2 : Optimized Approach

        // BC
        if(s.length() != goal.length()){
            return false;
        }
        string x=s+s;
        if(x.find(goal) != string::npos){
            return true;
        }
        return false;

    }
};