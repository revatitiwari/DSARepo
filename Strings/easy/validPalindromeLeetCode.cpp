// Time Complexity : O(N)

class Solution {
public:
    bool isPalindrome(string s) {
        string res = "";

        for(char i : s) {
            i = tolower(i);
            if( isalpha(i) || isdigit(i) ) {
                res.push_back(i);
            }
        }

        int i=0;
        int j = (res.size())-1;

        if(s.size() == 0 || s.size() == 1) {
            return true;
        }

        while(i <= j) {
            if(res[i] == res[j]) {
                i++;
                j--;
            } else {
                return false;
            }
        }
        return true;
    }
};