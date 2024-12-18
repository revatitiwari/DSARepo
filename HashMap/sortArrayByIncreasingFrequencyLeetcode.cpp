class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        unordered_map<int, int> ans;
        
        for(int i=0; i<nums.size(); i++) {
            ans[nums[i]]++;
        }

        sort(nums.begin(), nums.end(), [&](int a, int b) {
            return ans[a] != ans[b] ? ans[a] < ans[b] : a>b;
        });

        return nums;
    }
};