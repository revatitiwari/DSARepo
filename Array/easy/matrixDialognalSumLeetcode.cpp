class MatrixDiagonalSum {
public:
     int solve(vector<vector<int>> input) {
          int sum =0;
          int n = input.size();
		for(int i=0; i<n; i++) {
               sum += input[i][i];
               if(i != n-1-i) {
               sum += input[i][n-1-i];
               }
          }
          return sum;
     }
};


class MatrixDiagonalSum {
public:
     int solve(vector<vector<int>> input) {
          int sum =0;
		for(int i=0; i<input.size(); i++) {
               for(int j=0; j<input[0].size(); j++) { 
                    if(i==j || i+j==input.size()-1) {
                         sum = sum + input[i][j];
                    }
               }
          }
          return sum;
     }
};