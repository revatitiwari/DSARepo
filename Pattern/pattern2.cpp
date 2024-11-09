// Print the Right Triangle Star Pattern for the given value of N.

// Input 1: N = 4
// Output 1:
// *
// **
// ***
// ****

// Explanation 1: Square of 4*4 will be formed with 1 star in first row, two star in second row and so on.


class Pattern {
public:
     vector<string> solve(int N) {
		vector<string> ans;
          for(int i=0; i<N; i++) {
               string res;
               for(int j=0; j<=i; j++) {
                    res.push_back('*');
               }
               ans.push_back(res);
               res.clear();
          }
          return ans;
     }
};