class Solution {
public:
    char slowestKey(vector<int>& releaseTimes, string keysPressed) {
        int n = releaseTimes.size();
        int maxTime = releaseTimes[0];  // Time for the first key press
        int index = 0;  // Index of the slowest key press

        // Loop through releaseTimes from the second key
        for (int i = 1; i < n; i++) {
            int time = releaseTimes[i] - releaseTimes[i - 1];
            
            if (time > maxTime) {
                maxTime = time;
                index = i;
            } else if (time == maxTime) {
                if(keysPressed[index] < keysPressed[i]) {
                    index =i;
                }
            }
        }
        return keysPressed[index];
    }
};