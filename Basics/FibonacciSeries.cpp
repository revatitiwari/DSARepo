//Write a program to generate the Fibonacci sequence up to a specified number of terms. 
//The program should allow the user to input the number of terms and then print the Fibonacci sequence.

//Input 1: N = 4
//Output 1: [0, 1, 1, 2]
//Explanation 1: First four numbers of Fibonacci Series are 0, 1, 1 and 2

class Fibonacci {
public:
     vector<int> solve(int N) {
          vector<int>res = {0};
		vector<int> ans = {0,1};
          int i=2;
          int start =0;

          if (N == 1 ) {
               return res;
          } else if (N==2) {
               return ans;
          }

          while(i<N) {
               int num = ans[start] + ans[start+1];
               ans.push_back(num);
               start++;
               i++;
          }
          return ans;
     }
};