class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<string,vector<string>> res;

        for(auto str: strs) {
            string s = str;
            sort(s.begin(), s.end());
            res[s].push_back(str);
        }

         vector<vector<string>> ans;
         for(auto it=res.begin(); it!=res.end(); it++) {
            ans.push_back(it->second);
         }

         return ans;
    }
};