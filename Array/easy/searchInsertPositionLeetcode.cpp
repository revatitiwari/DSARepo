// Binary Search solution 
// O(log n) Time Complexity 

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int size = nums.size();
        int start = 0;
        int end = size;

        if(target> nums[size-1]) {
            return size;
        } 

        while(start <= end) {
            int mid = (start + end) / 2; 
            if(nums[mid] == target) {
                return mid;
            } 
            else if(nums[mid] < target) {
                start = mid+1;
            } else {
                end = end-1;
            }
        }

    return start;
    }
};