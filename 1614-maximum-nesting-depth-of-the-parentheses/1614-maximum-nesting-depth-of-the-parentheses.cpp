class Solution {
public:

// Ref : https://youtu.be/IOQi3aJFIaM?si=Y5hQgeJGXIvBP98x

    int maxDepth(string s) {

        int n=s.length();
        int maxi=0;
        int curr_max=0;
        for(int i=0;i<n;i++){
            if(s[i]=='('){
                curr_max++;
                maxi=max(maxi,curr_max);
            }
            else if(s[i]==')'){
                if(curr_max==0){
                    return -1;
                }
                else{
                    curr_max--;
                }
            }
        }
        if(curr_max != 0){
            return -1;
        }
        return maxi;
    }
};