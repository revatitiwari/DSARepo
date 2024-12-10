
// } Driver Code Ends
class Solution{
	public:
   	int  minimum_difference(vector<int>nums){
   	    int min = INT_MAX;
        int n = nums.size() - 1;
	   sort(nums.begin(), nums.end());

        for(int k=n; k>=0; k--) {
         if (min > nums[k] - nums[k-1] && k-1 >= 0) {
               min = nums[k]-nums[k-1];
          }
        }

        return min;
   	}    
};