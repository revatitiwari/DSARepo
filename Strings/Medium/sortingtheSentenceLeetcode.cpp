class Solution {
public:
    string sortSentence(string s) {
        map <int, string> arr;
        string ans= "";
        string word = "";

        for(char ch : s) {
            if(isdigit(ch)) {
                arr[ch] = word;
                word ="";
            } else if(ch!= ' ') {
                word += ch;
            }
        }

        for(int i=1; i<=arr.size(); i++) {
           if(!ans.empty()) {
            ans += ' ';
           } 
           ans += arr[i];
        }
        return ans;
       
    }
};