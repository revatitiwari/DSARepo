class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end());
        int n = intervals.size();
        int count =0;
        int prev = intervals[0][1];

        for(int i=1; i<n;i++) {
            if( prev>intervals[i][0]) {
                count++;
                prev = min(prev, intervals[i][1]);
            } else {
                prev =  intervals[i][1];
            }   
            
        }
        return count;
    }
};