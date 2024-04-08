class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {


        //Approach-1 (Simply simulate whatever the problem asks for)
        //T.C : O(n)
        //S.C : O(n)
        
        int n = students.size();
        stack<int>st;
        queue<int>q;
        for(int i=0;i<n;++i){
            st.push(sandwiches[n-i-1]);
            q.push(students[i]);
        }
        int noteat=0;
        while(!q.empty() && noteat < q.size()){
            if(st.top() == q.front()) {
                q.pop();
                st.pop();
                noteat=0;
            }
            else{
                q.push(q.front());
                q.pop();
                noteat++;
            }
        }
        return noteat;
    }
};