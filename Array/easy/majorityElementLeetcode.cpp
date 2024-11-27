class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int, int> res ;
        int n= nums.size()/2;
        int maxNum =0;

        for(int i=0; i<nums.size(); i++) {
            res[nums[i]]++;
        }

        for(auto ele: res) {
            if(ele.second>n) {
                maxNum = ele.first;
            }
        }

        return maxNum;
    }
};