class LeapYear {
public:
	bool check(int year) {
    		   /*
                  1. Divisible by 400
                  OR
                  2. Divisible by 4 and NOT divisible by 100

                  2000 -> Leap Year
                  2020 -> Leap Year
                  2023 -> Not a Leap Year
                  1900 -> Not a Leap Year
            */
            
            if(year%400==0 || (year%4==0 && year%100 != 0))
                  return true;
            else
                  return false;
      }
};