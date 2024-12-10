class Solution {
  public:
    int maxLen(vector<int>& arr) {
        int n = arr.size();
          unordered_map<int, int>mp;
          int sum=0; 
          int ans=0;
          mp[0]=-1;
          for(int i=0; i<n; i++){
          sum += arr[i];
          if(mp.find(sum) !=mp.end()){
               ans=max(ans,i-mp[sum]);
          }
          else{
               mp[sum]=i;
          }
          }
          return ans;
    }
};
