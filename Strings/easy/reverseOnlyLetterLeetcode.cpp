class Solution {
public:
    string reverseOnlyLetters(string s) {
        string str;
        int i=0;
        int j= s.length();

        while(i<j) {
            if(!isalpha(s[i])) {
                i++;
            } else if(!isalpha(s[i])) {
                j--;
            } else {
                swap(s[i], s[j]);
                i++;
                j--;
            }
        }
    
        return s;
    }
};