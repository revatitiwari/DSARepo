// Given a binary array A[] of size N. The task is to arrange the array in increasing order.

// Note: The binary array contains only 0 and 1.

// Input 1: arr[] = {1, 0, 1, 1, 0}
// Output 1: 0 0 1 1 1
// Explanation 1: After arranging the elements in increasing order, elements will be as 0 0 1 1 1.

class BinarySort {
public:
     vector<int> bsort(vector<int> input) {
          int i=0;
          int j= input.size()-1;
          
		while(i<j) {
               if(i<input.size()-1 && j>=0 && (input[i] == 1) && (input[j]==0)) {
                    swap(input[i], input[j]);
                    i++;
                    j--;
               } else if(i<input.size()-1 && j>=0 && input[i] == 0 ) {
                    i++;
               } else if(i<input.size()-1 && j>=0 && input[j]==1) {
                    j--;
               }
          }
          return input;
     }
};