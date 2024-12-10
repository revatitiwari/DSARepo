class Solution {
  public:
    bool armstrongNumber(int n) {
        int num = n;
        string str = to_string(n);
        int size = str.size();  
        int sum = 0;
        
        while (n > 0) {
            int digit = n % 10;  
            n = n / 10;  
            sum += pow(digit, size);  
        }
        
        return sum == num;
    }
};