class Solution {
public:
    int minBitFlips(int start, int goal) {

        int ans = start^goal;
        int cnt=0;
        while (ans) {
            // Check if the least significant bit is set
            if(ans&1){
                cnt++;
            }
            ans=ans>>1;
        }
        return cnt;
    }
};