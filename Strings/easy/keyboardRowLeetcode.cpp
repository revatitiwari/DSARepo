
#include <iostream>
#include <vector>
#include <string>
#include <algorithm> // For transform()

class Solution {
public:
    static bool checkstr(string str) {
        string row1 = "qwertyuiop";
        string row2 = "asdfghjkl";
        string row3 = "zxcvbnm";
        string row;
        
        // Convert the string to lowercase to handle case-insensitivity
        transform(str.begin(), str.end(), str.begin(), ::tolower);

        // Determine the row the first character belongs to
        if (row1.find(str[0]) != string::npos) {
            row = row1;
        } else if (row2.find(str[0]) != string::npos) {
            row = row2;
        } else if (row3.find(str[0]) != string::npos) {
            row = row3;
        }
        
        // Check if all characters in str belong to the same row
        for (auto ch : str) {
            if (row.find(ch) == string::npos) {
                return false;
            }
        }

        return true;
    }

    vector<string> findWords(vector<string>& words) {
        vector<string> ans;

        for (auto str : words) {
            if (checkstr(str)) {  // No need for '== true', the function already returns bool
                ans.push_back(str);
            }
        }
        return ans;
    }
};
