class Solution {
public:
    string replaceWords(vector<string>& dictionary, string sentence) {
        unordered_set<string> st(dictionary.begin(), dictionary.end());
        string ans = "";
        int n = sentence.length();
        
        int i = 0;
        while(i<n){
            string word = "";
            bool check = false;
            while(i<n && sentence[i]!= ' '){
                word+= sentence[i];
                if(st.find(word) != st.end()){
                    ans+= word;
                    check  = true;
                    while(i<n && sentence[i]!= ' '){
                        i++;
                    }
                    continue;
                }
                else{
                    i++;
                }
            }
            i++;
            if(check == false){
                ans+= word;
            }
            if(i != n+1)ans+= ' ';
        }
        return ans;
    }
};