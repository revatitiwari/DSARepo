class Solution {
public:
    int maximum69Number (int num) {
       stringstream ss;
        ss << num;

        string str = ss.str();

        for(int i=0; i<str.size(); i++) {
            if(str[i]=='6') {
                str[i] = '9';
                break;
            }
        }

        int ans = stoi(str);
        return ans;
    }
};