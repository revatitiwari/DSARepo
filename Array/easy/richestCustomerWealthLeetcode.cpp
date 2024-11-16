// You are given an m x n integer grid accounts where accounts[i][j] is the amount of money the i​​​​​​​​​​​th​​​​ customer has in the j​​​​​​​​​​​th​​​​ bank. 
// Return the wealth that the richest customer has. A customer's wealth is the amount of money they have in all their 
// bank accounts. The richest customer is the customer that has the maximum wealth.

// Input 1: accounts = [[1,2,3],[3,2,1]]
// Output 1: 6
// Explanation 1: 1st customer has wealth = 1 + 2 + 3 = 6
// 2nd customer has wealth = 3 + 2 + 1 = 6
// Both customers are considered the richest with a wealth of 6 each, so return 6.

class RichestCustomerWealth {
public:
     int solve(vector<vector<int>> input) {
          int sum = 0;
		for(int i=0; i<input.size(); i++) {
               int temp =0;
               for(int j=0; j<input[0].size(); j++) {
                    temp = temp + input[i][j];
               }
               if(temp>sum) {
                    sum = temp;
               }
          }
          return sum;
     }
};