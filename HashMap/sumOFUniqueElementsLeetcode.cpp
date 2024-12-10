class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        unordered_map<int, int> res;
        int sum =0;
        for(int i=0; i<nums.size(); i++) {
            res[nums[i]]++;
        }

          for(int i=0; i<nums.size(); i++){
            if(res[nums[i]] == 1) {
                sum += nums[i];
            }
        }

        return sum;
    }
};