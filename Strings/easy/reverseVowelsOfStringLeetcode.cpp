class Solution {
public:
    string reverseVowels(string s) {
        string vowels = "aeiouAEIOU";  // Use a std::string for vowels
        int i = 0;
        int j = s.length() - 1;

        while (i < j) {
            // Check if s[i] is a vowel
            if (vowels.find(s[i]) == string::npos) {
                i++;
            }
            // Check if s[j] is a vowel
            else if (vowels.find(s[j]) == string::npos) {
                j--;
            }
            // If both are vowels, swap them
            else {
                std::swap(s[i], s[j]);
                i++;
                j--;
            }
        }
        return s;
    }
};

//Time Complexity : O(N);