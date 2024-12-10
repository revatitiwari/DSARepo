class Solution {
  public:
    bool checkIsAP(vector<int> &arr) {
        sort(arr.begin(), arr.end());
          int diff = arr[1]- arr[0];

          for(int i=0; i<arr.size(); i++) {
               if(arr[i+1]-arr[i] != diff && i+1<arr.size()) {
                    return false;
               }
          }

          return true;
    }
};