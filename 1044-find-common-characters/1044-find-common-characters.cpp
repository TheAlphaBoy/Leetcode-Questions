class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        vector<string> vec;
        string s=words[0];bool flag;

        for(auto x:s){
            for(int i=1;i<words.size();i++){
                flag=false;

                for(int j=0;j<words[i].size();j++){
                    if(words[i][j]==x){
                        words[i][j]='A'; flag=true;break;
                    }
                }
                if(!flag) break;
            }
            string str;
            if(flag) {str+=x;vec.push_back(str);}
        }
        return vec;
    }
};