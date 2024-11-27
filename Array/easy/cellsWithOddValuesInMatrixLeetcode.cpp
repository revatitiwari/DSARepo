class Solution {
public:
    int oddCells(int m, int n, vector<vector<int>>& indices) {
        int sz = indices.size();
        int ans = 0;

        vector<int> row(m, 0); 
        vector<int> col(n, 0); // Use vector with size n, initialized to 0

        // Increment row and column counters based on indices
        for (int i = 0; i < sz; i++) {
            row[indices[i][0]]++;
            col[indices[i][1]]++;
        }

        // Calculate the number of cells with odd values
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                ans += (row[i] + col[j]) % 2;
            }
        }

        return ans;
    }
};
