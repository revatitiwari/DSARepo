
#include <iostream>
using namespace std;
#include <vector>

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        for(int i=0; i<nums.size(); i++) {
            if(nums[i] == nums[i+1]) {
                return nums[i];
            }
        }
        return -1;
    }
};

//TimeComplexity : O(N logN)