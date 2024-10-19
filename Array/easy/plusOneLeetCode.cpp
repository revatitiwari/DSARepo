class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int size = digits.size();
        int end = size-1;

        for(int i=size-1; i>=0; i--) {
            if(digits[i] < 9) {
                digits[i] = digits[i] +1;
                break;
            } else {
                digits[i] =0;
            }
        }
         if(digits[0] ==0 ) {
            vector<int> res(size+1, 0);
            res[0] = 1;
            return res;           
         }
        return digits;
    }
};

