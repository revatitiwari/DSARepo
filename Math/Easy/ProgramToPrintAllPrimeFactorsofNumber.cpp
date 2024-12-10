// Given a number n, write an efficient function to print all prime factors of n. For example, if the input number is 12, 
//then the output should be “2 2 3”. And if the input number is 315, then the output should be “3 3 5 7”.

// Input 1: 315
// Output 1: 3 3 5 7
// Explanation 1: Prime Factors of 315 are 3, 3, 5, 7

// Input 2: 12
//Output 2: 2 2 3

class Prime {
public:
     vector<int> solve(int N) {
          vector <int> ans;
		while(N%2==0) {
               ans.push_back(2);
               N = N/2;
          }

          for(int i=3; i<= sqrt(N); i=i+2) {
               while(N%i == 0) {
                    ans.push_back(i);
                    N = N/i;
               }
          }

          if(N > 2) {
               ans.push_back(N);
          }

          return ans;
     }
};