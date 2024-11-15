class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        int n = image.size();
        vector<vector<int>> ans(n, vector<int>(n));
       
        for(int i=0; i<n; i++) {
            for(int j=0; j<n; j++) {
                ans[i][j] = 1 - image[i][n-1-j];
            }
        }

        return ans;
    }
};