class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {

        //Approach-1 (Using Queue to simply simulate the operations)
        //T.C : O(n*m) -> Loop runs intil queue is empty and in worst case all people have maximum m tickets 
        //S.C : O(n)

        // queue<int>q;
        // int n=tickets.size();
        // for(int i=0;i<n;++i){
        //     q.push(i);
        // }
        // int t=0;
        // while(!q.empty()){
        //     ++t;
        //     int front = q.front();
        //     q.pop();
        //     tickets[front]--;
        //     if(k==front && tickets[front]==0){
        //         return t;
        //     }
        //     if(tickets[front]!=0){
        //         q.push(front);
        //     }
        // }
        // return t;

        //Approach-2 (Using simple observation)
        //T.C : O(n)
        //S.C : O(1)

        int t=0;
        int n=tickets.size();
        for(int i=0;i<n;++i){
            if(i<=k){
                t += min(tickets[i],tickets[k]);
            }
            else{
                t += min(tickets[k]-1,tickets[i]);
            }
        }
        return t;
    }
};