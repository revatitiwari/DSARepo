void createMapping(string& str) {
    char mapping[300]= {0};
    char start = 'a';

    for(auto ch: str) {
       if(mapping[ch] == 0) {
            mapping[ch] = start;
            start++;
        }; 
    };

    for(int i=0; i<str.length(); i++) {
        char ch= str[i];
        str[i] = mapping[ch];
    }
};

class Solution {
public:
    vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
        vector<string> res;
        createMapping(pattern);
        for(string s: words) {
            string tempStr = s;
            createMapping(tempStr);

            if(tempStr == pattern) {
                res.push_back(s);
            }
        }
        return res;
    }
};

//Time Complexity : O(N);