class Solution {
public:
    int maximumProduct(vector<int>& nums) {
       sort(nums.begin(), nums.end());
       int size = nums.size()-1;
        int ans = nums[size] * nums[size-1] * nums[size-2];

        return max(ans, nums[0]*nums[1]*nums[size]);
    }
};