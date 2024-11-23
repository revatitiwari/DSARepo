class Solution {
public:
    static string str;
    static bool compare (char c1, char c2) {
    return (str.find(c1) < str.find(c2));
    }

    string customSortString(string order, string s) {
        str = order;
        sort(s.begin(), s.end(), compare);
        return s;
    }
};
string Solution::str;