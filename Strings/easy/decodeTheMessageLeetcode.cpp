class Solution {
public:
    string decodeMessage(string key, string message) {
        char start = 'a';
        char mapping[280] ={0};
        //mapping
        for(auto ch : key) {
            if(mapping[ch] == 0 && ch != ' ') {
                mapping[ch] = start;
                start++;
            }
        }

        string res;

        for(auto ch: message) {
            if(ch == ' ') {
                res.push_back(' ');
            } else {
                char decodeChar = mapping[ch];
                res.push_back(decodeChar);
            }
        }
        return res;
    }
};

// O(N*2);