// Given a positive integer ‘N' ( 1 <= N <= 1015). Find the largest prime factor of a number.

// Input 1: 6
// Output 1: 3
// Explanation 1: Prime factor of 6 are - 2, 3
// Largest of them is '3'

class LargestPrime {
public:
	int solve(int n) {
    		int ans=0;

            while(n%2==0) {
                  ans=2;
                  n = n/2;
            }

            for(int i=3; i<=sqrt(n); i=i+2) {
                  while(n%i==0) {
                        ans =i;
                        n=n/i;
                  }
            }

            if(n>2) {
                  ans = n;
            }
            return n;
      }
};



