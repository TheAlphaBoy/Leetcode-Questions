class Solution {
 public:

// Ref : https://leetcode.com/problems/add-binary/solutions/3183205/1ms-beats-100-full-explanation-append-reverse-c-java-python3

  string addBinary(string a, string b) {

      int i=a.length()-1;
      int j=b.length()-1;
      int carry=0;
      string ans;
      while(i>=0 || j>=0 || carry){
          if(i>=0){
              carry += a[i]-'0';
              --i;
          }
          if(j>=0){
              carry += b[j]-'0';
              --j;
          }
          ans += carry%2 + '0';
          carry /= 2;
      }
      reverse(begin(ans),end(ans));
      return ans;
  }
};