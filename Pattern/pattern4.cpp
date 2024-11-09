// Input 1: N = 4
// Output 1:
// ****
// ***
// **
// *

// Explanation 1: Square of 4*4 will be formed with 4 star in first row from the beginning, 
// three star in second row from the beginning and so on.


class Pattern {
public:
     vector<string> solve(int N) {
		vector<string> ans;

          for(int i=0; i<N; i++) {
               string res;
               for(int j=0; j<N-i; j++) {
                    res.push_back('*');
               }
               ans.push_back(res);
               res.clear();
          }

          return ans;
     }
};