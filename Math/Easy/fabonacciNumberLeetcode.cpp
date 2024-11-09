// Complexity : O(N);

class Solution {
public:
    int fib(int n) {
        int i = 2;
        int sum =0;
        int start=1;
        vector<int> nums ={0,1};

        if(n==0) {
            return 0;
        } if (n==1) {
            return 1;
        }

        while(i<=n) {
            int num = nums[start] + nums[start-1]; 
            nums.push_back(num);
            start++;
            i++;
        }

        return nums[n-1] + nums[n-2];
    }
};


//Method 2: recursion

class Solution {
public:
    int fib(int n) {
        if(n==0) {
            return 0;
        } if(n==1) {
            return 1;
        } 
        return fib(n-1) + fib(n-2);
    }
};