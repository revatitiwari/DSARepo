// Input 1: N = 4
// Output 1:
// a
// ab
// abc
// abcd

class Pattern {
public:
     vector<string> solve(int N) {
	   vector<string> ans;
        for(int i=0;i<N;i++){
            string temp;
            for(int j=0;j<=i;j++){
                temp.push_back(char('a'+j));
            }
            ans.push_back(temp);
        }
        return ans;
     }
};