class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {


        //Approach-1 (Simply simulate whatever the problem asks for)
        //T.C : O(n)
        //S.C : O(n)
        
        // int n = students.size();
        // stack<int>st;
        // queue<int>q;
        // for(int i=0;i<n;++i){
        //     st.push(sandwiches[n-i-1]);
        //     q.push(students[i]);
        // }
        // int noteat=0;
        // while(!q.empty() && noteat < q.size()){
        //     if(st.top() == q.front()) {
        //         q.pop();
        //         st.pop();
        //         noteat=0;
        //     }
        //     else{
        //         q.push(q.front());
        //         q.pop();
        //         noteat++;
        //     }
        // }
        // return noteat;

        //Aproach-2 (Using counter only)
        //T.C : O(n)
        //S.C : O(1)

        int stud_1=0;
        int stud_0=0;
        int n=students.size();
        for(int it : students){
            if(it==0){
                stud_0++;
            }
            else{
                stud_1++;
            }
        }
        for(int i=0;i<n;++i){
            if(sandwiches[i]==0){
                if(stud_0 > 0){
                    stud_0--;
                }
                else{
                    return stud_0 + stud_1;
                }
            }
            else if(sandwiches[i]==1){
                if(stud_1 > 0){
                    stud_1--;
                }
                else{
                    return stud_0 + stud_1;
                }
            }
        }
        return 0;
    }
};