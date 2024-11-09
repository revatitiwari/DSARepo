//Print the Hollow Square Star Pattern for the given value of N.
// Input 1: N = 4
// Output 1:
// ****
// *__*
// *__*
// ****
// Explanation 1: Square of 4*4 will be formed with 4 star in first row from the beginning, 
// one star in second row from the beginning and one star in the second row from the last and so on.

class Pattern {
public:
     vector<string> solve(int N) {
		vector<string> ans;
          for(int i=0; i<N; i++) {
               string res;
               for(int j=0; j<N; j++) {
                    if(i== 0 or i==N-1 or j== 0 or j==N-1) {
                       res.push_back('*');  
                    } else {
                       res.push_back(' ');
                    }
               }
               ans.push_back(res);
          }
          return ans;
     }
};