class Solution {
public:
    bool checkIfPangram(string sentence) {
        bool attendence[26] = {false};
        int size = sentence.size();

        for(int i=0; i<size; i++) {
            int idx = sentence[i] - 'a';
            attendence[idx] = true;
        }

        for(int i=0; i<26; i++) {
            if(!attendence[i]) {
                return false;
            }
        }
        return true;
        
    }
};