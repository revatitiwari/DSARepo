class Solution {
public:
    bool divideArray(vector<int>& nums) {
        unordered_map <int, int> res;
        for(int i=0; i<nums.size(); i++) {
            res[nums[i]]++;
        }
         for(int i=0; i<nums.size(); i++)  {
            if(res[nums[i]] % 2!= 0) {
                return false;
            }
         }

         return true;

    }
};