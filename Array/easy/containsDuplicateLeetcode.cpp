class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        map<int, int> res;

        for(int i=0; i<nums.size(); i++) {
            if(res.count(nums[i])>0) {
                return true;
            } else {
                res[nums[i]]++;
            }
        }
        return false;
    }
};

//approach 2

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        for(int i=0; i<nums.size()-1; i++) {
            if(i+1<nums.size() && nums[i] == nums[i+1]) {
               return true;
            }
        }
        return false;
    }
};