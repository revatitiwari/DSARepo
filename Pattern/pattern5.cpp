// Print the Number Series Pattern for the given value of N.

// Input 1: N = 4
// Output 1:
// 1
// 12
// 123
// 1234
// Explanation 1: Square of 4*4 will be formed with series up to 1 from the beginning, series up to 2 
// from the beginning in the second row from the beginning and so on.

class Pattern {
public:
     vector<string> solve(int N) {
           vector<string> ans;
		for(int i=0; i<N; i++) {
               string res;
               for(int j=0; j<=i; j++) {
                    res.push_back((char((j + 1) + '0')));
               }
               ans.push_back(res);
               res.clear();
          }
          return ans;
     }
};