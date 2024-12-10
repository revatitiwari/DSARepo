class Solution {
public:
    int splitNum(int num) {
         string str = to_string(num);
         string n1="";
         string n2="";
         sort(str.begin(), str.end());

         for(int i=0 ;i<str.size(); i++) {
            if(i%2==0) {
                n1 += str[i];
            } else {
                n2 += str[i];
            }
         }

         int num1 = stoi(n1);
         int num2 = stoi(n2);

         return (num1+num2);
    }
};