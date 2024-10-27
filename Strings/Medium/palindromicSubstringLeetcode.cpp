

int exapnd(string s, int i , int j) {
    int count =0;
    while( i>=0 && j<s.length() && s[i]==s[j]) {
        count++;
        i--;
        j++;
    }
    return count; 
}

class Solution {
public:
    int countSubstrings(string s) {
        int totalCount =0;

        for(int center=0; center<s.length() ; center++) {
            //odd
            int oddCount = exapnd(s, center, center);

            //even
            int evenCount = exapnd(s, center, center+1);

            totalCount = totalCount + oddCount + evenCount;
        }

        return totalCount;
    }
};

// Time Complexity : O(N*2)