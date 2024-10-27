
bool checkPalindrome(string s, int i , int j) {
    while(i<=j) {
        if(s[i] != s[j]) {
           return false;
        } else {
            i++;
            j--;
        }
    }
    return true;
}

class Solution {
public:
    bool validPalindrome(string s) {
        int i =0;
        int j = s.length() - 1;

        while (i<j) {
            if (s[i] == s[j] ) {
                i++;
                j--;
            } else {
                bool str1 = checkPalindrome(s, i+1, j);
                bool str2 = checkPalindrome(s, i, j-1);
                return str1 || str2;
            }
        }
        // If you reached till here that means It's a valid palindrom
        // so return true
        return true;
    }
};

// Time Complexity : O(N)