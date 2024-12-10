class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
       unordered_set<int> seen;
        for(int i=0; i<arr.size(); i++) {
            int mul = arr[i]*2;
            if(seen.count(mul) || arr[i]%2 == 0 && seen.count(arr[i]/2)) {
                return true;
            }
           seen.insert(arr[i]);
        }
        return false;
    }
};