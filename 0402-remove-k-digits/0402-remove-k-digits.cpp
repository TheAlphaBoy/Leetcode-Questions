class Solution {
public:
    string removeKdigits(string num, int k) {

        // As we have to make the follow a particular order (while building intution),
        // like -> inc/dec/strictly inc,strictly dec so iske liye hum generally 
        // monotonic stack wale approach se solve karte hai

        int n=num.length();
        stack<int>st; // we can also use string instead of stack
        for(int i=0;i<n;++i){
            while(st.size()>0 && k>0 && st.top()>num[i]){
                st.pop();
                --k;
            }
            if(st.size()>0 || num[i]!='0'){ // leading zero hatane ke liye agar present ho to
                st.push(num[i]);
            }
        }
        while(st.size()>0 && k>0){
            st.pop();
            --k;
        }
        if(st.size()==0){
            return "0";
        }
        string str;
        while(!st.empty()){
            char ch=st.top();
            st.pop();
            str.push_back(ch);
        }
        reverse(str.begin(),str.end());
        return str;
    }
};