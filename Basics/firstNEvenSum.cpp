//Write a function to find sum of all even numbers from 1 to N.

//Input 1: N = 6
//Output 1: 12
//Explanation 1: Sum = (2 + 4 + 6) = 12

class Sum {
public:
	int solve(int n) {
            int sum;

            if(n%2==0) {
                  sum = n *(n+2) /4;
            } else {
                  sum = ( (n-1)*(n+1) )/ 4;
            }
            return sum;
      }

};