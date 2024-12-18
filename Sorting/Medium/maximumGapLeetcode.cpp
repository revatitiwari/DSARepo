// Time Complexity : O(N*3)

class Solution {
public:
    int maximumGap(vector<int>& nums) {
        if(nums.size() <= 1) {
            return 0;
        } 

        for(int i=0; i<nums.size(); i++) {
            for(int j=i; j<nums.size(); j++) { 
                if(nums[i] > nums[j]) {
                    swap(nums[i], nums[j]);
                }
            }
        }

        int maxGap = 0;
        for(int i = 1; i < nums.size(); i++) {
            maxGap = max(maxGap, nums[i] - nums[i-1]);
        }

        return maxGap;
    }
};

// Time Complexity : O(NlogN) + O(N)

class Solution {
public:
    int maximumGap(vector<int>& nums) {
        if(nums.size() <= 1) {
            return 0;
        } 
        sort(nums.begin(), nums.end());

        int maxGap = 0;
        for(int i = 1; i < nums.size(); i++) {
            maxGap = max(maxGap, nums[i] - nums[i-1]);
        }

        return maxGap;
    }
};

