string createMapping(string& s) {
    char start='a';
    char mapping[300] = {0};

    for(auto ch: s) {
        mapping[ch] = start;
        start++;
    }

    //use 
    for(int i=0; i<s.length(); i++) {
        char ch = s[i];
        s[i] = mapping[ch];
    }
    return s;
};

class Solution {
public:
    bool isIsomorphic(string s, string t) {
        string s1 = createMapping(s);
        string t1 = createMapping(t);

        if(s1 == t1) {
            return true;
        }

        return false;
    }
};