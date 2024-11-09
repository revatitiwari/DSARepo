//Given an array nums. We define a running sum of an array as runningSum[i] = sum(nums[0]…nums[i]). 
//Return the running sum of nums.

//Input 1: nums = [1,2,3,4]
//Output 1: [1,3,6,10]
//Explanation 1: Running sum is obtained as follows: [1, 1+2, 1+2+3, 1+2+3+4].

class RunningSum {
public:
     vector<int> sum(vector<int> input) {
          int start =input[0];
		vector<int> ans ={start};

          for(int i=1; i<input.size(); i++) {
               int sum = input[i] + ans[i-1];
               ans.push_back(sum);
          }
          return ans;
     }
};