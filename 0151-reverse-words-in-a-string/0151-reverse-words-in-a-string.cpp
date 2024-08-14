class Solution {
public:
    string reverseWords(string s) {
        stack<string>st;
        int n=s.length();
        for(int i=0;i<n;++i){
            string str="";
            if(s[i]==' ') continue;
            while(i<n && s[i]!=' '){
                str += s[i];
                ++i;
            }
            st.push(str);
        }
        string ans ="";
        while(!st.empty()){
            ans += st.top();
            st.pop();
            if(!st.empty()) {
                ans+=" ";
            }
        }
        return ans;
    }
};