class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>>matrix(n, vector<int>(n));
        int up = 0, down = n-1, left =0, right = n-1, ct=1;

        while(ct <= n*n) {
            for(int j=left; j<=right && ct<=n*n; j++) {
                matrix[up][j] = ct++;
            }

            for(int j=up+1; j<=down-1 && ct<=n*n; j++) {
                matrix[j][right] = ct++;
            }
            
            for(int j=right; j>=left && ct<=n*n; j--) {
                matrix[down][j] = ct++;
            }

            for(int j=down-1; j>=up+1 && ct<=n*n; j--) {
                matrix[j][left] = ct++;
            }

            up++; down--; left++; right--;
        }

        return matrix;
    }
};