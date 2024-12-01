class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        map <int, int> ans;
          int count = 0;

          for(int i=0; i< nums.size(); i++) {
               ans[nums[i]]++;
          }

          for(auto it: ans) {
               if(it.second> 1) {
                    int n = it.second;
                    int sum = ((n-1)*(n))/2;
                    count = count + sum;
               }
          }
          return count;
    }
};