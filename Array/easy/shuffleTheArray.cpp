//Given the array nums consisting of n(n will be even) elements in the form [x1,x2,...,xn,y1,y2,...,yn]. 
//Return the array in the form [x1,y1,x2,y2,...,xn,yn].

//Input 1: nums = [2,5,1,3,4,7]
//Output 1: [2,3,5,4,1,7]
//Explanation 1: Since x1=2, x2=5, x3=1, y1=3, y2=4, y3=7 then the answer is [2,3,5,4,1,7].

// Input 2: nums = [1,2,3,4,4,3,2,1]
// Output 2: [1,4,2,3,3,2,4,1]

// Input : 6 2 5 1 3 4 7
// output : 2 3 5 4 1 7

class Shuffle {
public:
    vector<int> shuffle(vector<int> input) {
        vector<int> ans;
        int i;
        int j;
        int mid;
        
        if (input.size() % 2 != 0) { // Odd-sized input
            int i = 1;
            int mid = (input.size() - 1) / 2;
            int j = mid + 1;
            while (i <= mid && j < input.size()) {
                ans.push_back(input[i]);
                ans.push_back(input[j]);
                i++;
                j++;
            }
            
        } else { // Even-sized input
            int mid = input.size() / 2;
            int i = 0;
            int j = mid;
            while (i < mid && j < input.size()) {
                ans.push_back(input[i]);
                ans.push_back(input[j]);
                i++;
                j++;
            }
        }
        return ans;
    }
};

