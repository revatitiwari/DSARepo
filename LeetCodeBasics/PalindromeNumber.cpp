class Solution {
public:
    bool isPalindrome(int x) {
    int num = x;
            if(x<0 || x!=0 && x%10 ==0 ) {
                return false;
            } if (x==0) {
                return true;
            }
            
    		long long rev = 0, digit; 
            do
            {
              digit = x % 10;
              rev = (rev * 10) + digit;
              x = x / 10;
            } while (x != 0);

            if(num == rev && num >0) {
                  return true;
            }
        return false;
    }
};