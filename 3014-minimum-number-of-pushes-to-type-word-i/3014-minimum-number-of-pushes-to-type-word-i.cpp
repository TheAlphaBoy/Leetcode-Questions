class Solution {
public:
    int minimumPushes(string word) {
        
        int cost=0;
        for(int i=0;i<word.length();i++){
            if(i<=7){
                cost++;
            }
            else if(i>7 && i<=15){
                cost +=2;
            }
            else if(i>15 && i<=23){
                cost +=3;
            }
            else{
                cost +=4;
            }
        }
        return cost;
        
    }
};