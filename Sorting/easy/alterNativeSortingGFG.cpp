class Solution {

  public:
    vector<int> alternateSort(vector<int>& arr) {
        vector<int> ans;
          sort(arr.begin(), arr.end());
          int i=0;
          int j=arr.size()-1;  // 1 2 3 4 6 7 8 9
               while(i<=j) {
                    if(i<j) {
                         ans.push_back(arr[j]);
                         ans.push_back(arr[i]);
                    } else if (i==j) {
                         ans.push_back(arr[j]);
                    }
                    i++;
                    j--;
               }
          return ans;
    }
};