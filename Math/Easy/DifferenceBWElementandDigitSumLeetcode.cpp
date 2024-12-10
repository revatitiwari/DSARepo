class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int i=0;
        long long res1 =0;
        long long res2=0;

        while(i<nums.size()) {
             res1 += nums[i];
            if(nums[i]>9) {
               int num = nums[i];
               while(num !=0) {
                int digit = num %10;
                num = num/10;
                res2 += digit;
               }
            } else {
                res2 += nums[i];
            }
            i++;
        }

        return (res1-res2);
        
    }
};