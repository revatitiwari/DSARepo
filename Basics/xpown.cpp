//Take 2 numbers from the user, x & n. Find xn (Calculate this without using the inbuilt function).

//Input 1: X = 4, N = 2
//Output 1: 16
//Explanation 1: 42 = 16

class Pow {
public:
	int pow(int x,int n) {
            int multiply = 1;
            int i=1;
    		while(i<=n) {
                  multiply = multiply * x;
                  i++;
            }
            return multiply;
      }
};