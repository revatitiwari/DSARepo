class Solution {
public:
    int pivotInteger(int n) {
        int j=n;
        int ans = -1;
        int sum1 = 0;
        int sum2 = 0;

        while(j>=1) {
            sum2 += j;
            sum1 = j*(j+1)/2;
            if(sum1 == sum2) {
                ans =j;
                return ans;
            }
            j--;
        }
        return ans;
    }
};