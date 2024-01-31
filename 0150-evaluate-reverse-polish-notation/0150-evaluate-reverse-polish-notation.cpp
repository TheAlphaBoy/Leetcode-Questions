class Solution {
public:

// Reverse Polish means Postfix
// Polish means Prefix


    int evalRPN(vector<string>& tokens) {

        stack<long>st;
        for(auto it : tokens){
            if(it=="+" || it=="-" || it=="*" || it=="/"){

                long a=st.top();
                st.pop();
                long b=st.top();
                st.pop();
                if(it=="+")
                a=b+a;
                if(it=="-")
                a=b-a;
                if(it=="*")
                a=b*a;
                if(it=="/")
                a=b/a;
                st.push(a);

            }
            else{
                st.push(stoi(it));
            }
        }
        return st.top();        
    }
};