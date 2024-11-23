class Solution {
public:
    int countGoodRectangles(vector<vector<int>>& rectangles) {
        map<int, int> mp;
        
        for (int i=0; i<rectangles.size(); i++) {
            int maxSide = min(rectangles[i][0], rectangles[i][1]);
            mp[maxSide]++;
        }

        int maxCount = -1;
        int key = INT_MIN;
        for (auto ele : mp) {
            if(key < ele.first) {
                key = ele.first;
                maxCount = ele.second;
            }
        }

        return maxCount;      
    }
};