//Print the Square Star Pattern for the given value of N.

// Input 1: N = 4
// Output 1:
// ****
// ****
// ****
// ****


class Pattern {
public:
     vector<string> solve(int N) {
	   vector<string> ans;
        for(int i=0;i<N;i++){
            string temp;
            for(int j=0;j<N;j++){
                temp.push_back('*');
            }
            ans.push_back(temp);
        }
        return ans;
     }
};