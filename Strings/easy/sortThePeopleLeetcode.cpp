class Solution {
static pair<int, int> findMax(vector<int> &nums) {
    int Max = 0;
    int index = -1;
   
    for(int i=0; i<nums.size(); i++) {
        if(Max < nums[i]) {
            Max=nums[i];
            index =i;
        }
    }
    return {Max, index};
}

public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        vector<string> ans;

        while(!heights.empty()) {
            auto [maxHeight, index] = findMax(heights);
            ans.push_back(names[index]);
            names.erase(names.begin() + index);
            heights.erase(heights.begin()+index);
        }
        return ans;
    }
};


// Method2: HashMap solution

class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
       vector<pair<int, string>> ans;

        for(int i=0; i<names.size(); i++) {
            ans.push_back({heights[i], names[i]});
        }

        sort(rbegin(ans), rend(ans));

        for(int i=0; i<names.size(); i++) {
            names[i] = ans[i].second;
        }

        return names;
    }
};