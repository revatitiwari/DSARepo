class Solution {
public:
    string reverseWords(string s) {
        vector<string> words;
        string word = "", result = "";

        for (char ch : s) {
            if (ch == ' ') {
                if (!word.empty()) {
                    words.push_back(word);
                    word = "";
                }
            } else {
                word += ch;
            }
        }
        if (!word.empty()) {
            words.push_back(word);
        }

        for (int i = words.size() - 1; i >= 0; i--) {
            if (!result.empty()) {
                result += ' ';
            }
            result += words[i];
        }

        return result;
    }
};
